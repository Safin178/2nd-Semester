#include<bits/stdc++.h>
using namespace std;
#include<string>
#include<conio.h>
FILE *fp;
class chatbot
{
private:
    map<string,string>response;
public:
    chatbot()
    {
        fp = fopen("ques234.txt","r");
        int n;
        fscanf(fp, "%d", &n);
        char key[1000],value[1000];
        for(int i = 0; i < n; i++)
        {
            fscanf(fp,"\n%[^\n]", key);
            fscanf(fp,"\n%[^\n]", value);
            string k ="",v="";
            for(int i = 0; i < strlen(key); i++)
            {
                k = k+key[i];
            }
            for(int i = 0; i < strlen(value); i++)
            {
                v = v+value[i];
            }
            response[k] = v;

        }
    }
    string getResponse(const string& question)
    {

        string lowercaseQuestion = question;
        transform(lowercaseQuestion.begin(), lowercaseQuestion.end(), lowercaseQuestion.begin(),::tolower);
        auto it = response.find(lowercaseQuestion);
        if (it != response.end())
        {
            return it->second;
        }
        else
        {
            return "I'm sorry, I don't understand that question.";
        }
    }


};

int main()
{
    chatbot cb;
    cout << "Chatbot: Hello! How can I assist you today?" << endl;
    string input;
    while (true)
    {
        cout << "You: ";
        getline(cin,input);
        if (input == "exit" || input == "bye")
        {
            cout << "Chatbot: Goodbye!" << endl;
            break;
        }
        else
        {
            string response = cb.getResponse(input);
            cout << "Chatbot: " << response << endl;
        }

    }
    getch();
}
