#ifndef GRADER_H
#define GRADER_H

#include <iostream>
#include <sstream>

using namespace std;

class Grader{
  private:
  int *respuestas, size;
  float points; 
  char grade;
  string matricula;

  public:
  Grader(string ans);
  Grader(string matricula,string ans);
  void Calificar(Grader &alumno);
  void MostrarGrade();
};

Grader::Grader(string ans)
{
 size=ans.size();
 points=2*size;
 respuestas=new int[size];
 for(int i=0;i<size;i++)
 {
   if(ans[i]==32)
   {
     respuestas[i]=0;
   }
   else
   {
     respuestas[i]=ans[i]-48;
   }
   //cout<<respuestas[i];
 }
 //cout<<endl;
}

Grader::Grader(string matricula,string ans)
{

 size=ans.size();
 respuestas=new int[size];
 for(int i=0;i<size;i++)
 {
   if(ans[i]==32)
   {
     respuestas[i]=0;
   }
   else
   {
     respuestas[i]=ans[i]-48;
   }
   //cout<<respuestas[i];
 }
 this->matricula=matricula;
}

void Grader::Calificar(Grader &alumno)
{
  if (size==alumno.size)
  {
    for (int i=0;i<size;i++)
    {
      //cout<<respuestas[i]<<alumno.respuestas[i]<<endl;
      if (respuestas[i]==alumno.respuestas[i])
      {
        alumno.points=alumno.points+2;
        //cout<<"+2"<<endl;
      }
      else if (alumno.respuestas[i]==0)
      {
        //cout<<"0"<<endl;
      }
      else
      {
        alumno.points=alumno.points-1;
        //cout<<"-1"<<endl;
      }
      //cout<<"p"<<alumno.points<<endl;
    }
  }

  else
  {
    for (int i=0;i<alumno.size;i++)
    {
      if (respuestas[i]==alumno.respuestas[i])
      {
        alumno.points=alumno.points+2;
        //cout<<"+B"<<endl;
      }
      else if (alumno.respuestas[i]==0)
      {
        //cout<<"0B"<<endl;
      }
      else
      {
        alumno.points=alumno.points-1;
        //cout<<"-B"<<endl;
      }
    }
  }

  //cout<<alumno.points<<"/"<<points<<endl;
  //cout<<alumno.points/points<<endl;


  if((alumno.points/points)>=.9)
  {
    alumno.grade='A';
  }
  else if((alumno.points/points)>=.8)
  {
    alumno.grade='B';
  }
  else if((alumno.points/points)>=.7)
  {
    alumno.grade='C';
  }
  else if((alumno.points/points)>=.6)
  {
    alumno.grade='D';
  }
  else
  {
    alumno.grade='F';
  }
  delete[] respuestas;
  delete[] alumno.respuestas;
}

void Grader::MostrarGrade()
{
  cout<<matricula<<": "<<grade<<endl;
}

#endif