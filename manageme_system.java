import java.util.Scanner;
import java.io.BufferedReader;  
import java.io.FileReader;  

public class Teacher {
    String tid;
    String name;
    String college;
    String department;
    Teacher(String tid,String name,String college,String department){
    	this.tid=tid;
    	this.name=name;
    	this.college=college;
    	this.department=department;
    }
    void change(String tid,String name,String college,String department){
    	this.tid=tid;
    	this.name=name;
    	this.college=college;
    	this.department=department;
    }
}

public class Course {
   String cid;
   String name;
   String point;
   String time;
   Course(String cid,String name,String point,String time){
	   this.cid=cid;
	   this.name=name;
	   this.point=point;
	   this.time=time;
   }
   void change(String name,String point,String time){
	   this.name=name;
	   this.point=point;
	   this.time=time;
   }
}

public class Score {
	String sid;
	String tid;
    String course;
    String teacher;
    String sname;
    String  s;
    String point;
    Score(String sid,String course,String teacher,String tid,String  s,String sname,String point){
    	this.sid=sid;
    	this.course=course;
    	this.teacher=teacher;
    	this.tid=tid;
    	this.s=s;
    	this.sname=sname;
    	this.point=point;
    }
    void tea_change(String point){
    	this.point=point;
    }
}

public class Admin {
   String aid;
   String name;
   String college;
   Admin(String aid,String name,String college){
	   this.aid=aid;
	   this.name=name;
	   this.college=college;
   }
   void change(String aid,String name,String college){
	   this.aid=aid;
	   this.name=name;
	   this.college=college;
   }
}

public class  manage_system{
	static Student stu[]=new Student[10];
	static Teacher tea[]=new Teacher[4];
	static Course cou[]=new Course[4];
	static Score sco[]=new Score[40];
	static Admin adm;
	
	public static void file(){
		try{  
			  BufferedReader reader=new BufferedReader(new FileReader("D:\\student.csv"));
		      String line;
		      int i=0; 
		      while((line=reader.readLine())!=null){
		          String item[]=line.split(",");
		          stu[i]=new Student(item[0],item[1],item[2],item[3],item[4],item[5]);
		          i++;
		      }
		   } catch (Exception e) {  
		       e.printStackTrace();  
		  } 
		try{  
			  BufferedReader reader=new BufferedReader(new FileReader("D:\\teacher.csv"));
		      String line;
		      int i=0; 
		      while((line=reader.readLine())!=null){
		          String item[]=line.split(",");
		          tea[i]=new Teacher(item[0],item[1],item[2],item[3]);
		          i++;
		      }
		   } catch (Exception e) {  
		       e.printStackTrace();  
		  } 
		try{  
			  BufferedReader reader=new BufferedReader(new FileReader("D:\\score.csv"));
		      String line;
		      int i=0; 
		      while((line=reader.readLine())!=null){
		          String item[]=line.split(",");
		          sco[i]=new Score(item[0],item[1],item[2],item[3],item[4],item[5],item[6]);
		          i++;
		      }
		   } catch (Exception e) {  
		       e.printStackTrace();  
		  } 
		try{  
			  BufferedReader reader=new BufferedReader(new FileReader("D:\\course.csv"));
		      String line;
		      int i=0; 
		      while((line=reader.readLine())!=null){
		          String item[]=line.split(",");
		          cou[i]=new Course(item[0],item[1],item[2],item[3]);
		          i++;
		      }
		   } catch (Exception e) {  
		       e.printStackTrace();  
		  } 
		try{  
			  BufferedReader reader=new BufferedReader(new FileReader("D:\\admin.csv"));
		      String line;
		      line=reader.readLine();
		      String item[]=line.split(",");
		      adm=new Admin(item[0],item[1],item[2]);      
		   } catch (Exception e) {  
		       e.printStackTrace();  
		  } 
		
	}
	
	public static void stu_func(){
		System.out.println("输入学号:");
		Scanner scanner=new Scanner(System.in);
		String id=scanner.next();
		for(;;){
		   System.out.println("*************************************************");
		   System.out.println("选择您的操作: 1:个人信息修改 2:课程查询 3:成绩查询");
		   int n1=scanner.nextInt();
		   switch(n1){
		      case 1:{
			         System.out.println("输入您要修改的信息:");
			         String sid=scanner.next();
			         String name=scanner.next();
			         String birthday=scanner.next();
			         String college=scanner.next();
			         String sex=scanner.next();
			         String major=scanner.next();
			         for(int i=0;i<10;i++){
			    	    if(sid.equals(stu[i].sid)){
			    		   stu[i].change(sid,name,birthday,college,major,sex);
			    		   break;
			    	    }
			         }
		            System.out.println("修改成功");
		      }break; 
		      case 2:{
			         System.out.println("课程如下:");
			         for(int i=0;i<40;i++){
				         if(id.equals(sco[i].s)){
					        System.out.println(sco[i].course);
				         }
			         }
			        System.out.println();
		     }   break;
		     case 3:{
			       System.out.println("    成绩   课程   学分   学时");
			       for(int i=0;i<40;i++){
				       if(id.equals(sco[i].s)){
					      System.out.print(sco[i].point+" "+sco[i].course);
					      for(int j=0;j<4;j++){
						      if(sco[i].course.equals(cou[j].name)){
							      System.out.print(" "+cou[j].point+" "+cou[j].time+" ");
						      }
					      }
					      System.out.println();
				      }
			      }
		     }   break;
		     default: return;
		  }
		}
	}
	
	public static void tea_func(){
		System.out.println("输入职工号:");
		Scanner scanner=new Scanner(System.in);
		String id=scanner.next();
		for(;;){
			System.out.println("*************************************************");
		    System.out.println("选择您的操作: 1:个人信息修改  2:成绩登录  3:课程查询");
		    int n2=scanner.nextInt();
		    switch(n2){
		      case 1:{
		            System.out.println("输入您要修改的信息:");
		            String tid=scanner.next();
		            String name=scanner.next();
		            String college=scanner.next();
		            String department=scanner.next();
	                for(int i=0;i<10;i++){
	    	           if(id.equals(tea[i].tid)){
	    		         tea[i].change(tid,name,college,department);
	    		         break;
	    	          }
	                }
                    System.out.println("修改成功");
              }  break; 
		       case 2:{
			        System.out.println("输入你要登录的学生学号:");
			        String id2=scanner.next();
			        for(int i=0;i<40;i++){
				       if((id.equals(sco[i].tid))&&(id2.equals(sco[i].s))){
					      System.out.println("输入成绩:");
					      String p=scanner.next();
					      sco[i].tea_change(p);
					       System.out.println("修改成功!");
				       }
			        }
		        }   break;
		       case 3:{
		    	   System.out.println("课程            学分    学时 ");
			       for(int i=0;i<40;i++){
				       if(id.equals(sco[i].tid)){
					      System.out.print(sco[i].course);
					      for(int j=0;j<4;j++){
						    if(sco[i].course.equals(cou[j].name)){							
							   System.out.println(" "+cou[j].point+" "+cou[j].time);						  
						   }
					     }
					      break;
				    }	 
			    }
		     }break;
		     default: return;
		  }
		}
	}
	
	public static void adm_func(){
		Student temp;
		Scanner scanner=new Scanner(System.in);
		System.out.println("输入职工号:");
		String id=scanner.next();
		for(;;){
		System.out.println("*************************************************");
		System.out.println("选择您的操作: 1:个人信息修改  2:成绩打印  3:成绩排名  4:课程管理");
		int n3=scanner.nextInt();
		switch(n3){
		  case 1:{
			  System.out.println("输入您要修改的信息:");
			   String aid=scanner.next();
			   String name=scanner.next();
			   String college=scanner.next();
		      adm.change(aid,name,college);
	          System.out.println("修改成功");
		  }   
		  break;
		  case 2:{
			for(int i=0;i<10;i++){
			    System.out.println("姓名:"+stu[i].name+" 学号:"+stu[i].sid);
				for(int j=0;j<40;j++){
					if(stu[i].sid.equals(sco[j].s)){
						System.out.println(sco[j].course+" "+sco[j].point);
					}
			  }  
				System.out.println();
		  } 
		}break;
		  case 3:{
			    for(int m=0;m<10;m++){
			       for(int n=0;n<40;n++){
			    	   if(stu[m].name==sco[n].sname){
			    		   stu[m].getallpoint(sco[n].point);
			    	   }
			       }
			    }
			    for(int i=0;i<10;i++){
			    	for(int j=0;j<7;j++){			    		
			    			temp=stu[j+1];
			    			stu[j+1]=stu[j];
			    			stu[j]=temp;			    	
			    	}
			    }
			    System.out.println("排名如下");
			    for(int k=0;k<10;k++){
			    	System.out.println(k+1+" "+stu[k].sid+" "+stu[k].name);
			    }
			  }break;
		  case 4:{
			  System.out.println("输入您要修改课程编号:");
			   String cid=scanner.next();
			   for(int i=0;i<4;i++){
				   if(cid.equals(cou[i].cid)){
					   System.out.println("输入您要修改的信息:");			  
					   String name=scanner.next();
					   String point=scanner.next();
					   String time=scanner.next();
					   cou[i].change(name,point,time);
					   System.out.println("修改成功");
					   break;
				   }
			   }			  
		  }break;
		  default: return;
		 } 
	  }
	}
	
	public  static void UI(){
		System.out.println("               学生成绩管理系统                                                    ");
		System.out.println("*************************************************");
		System.out.println("输入您的选择: 1:学生  2:教师  3:教务员");
		Scanner scanner=new Scanner(System.in);
		int n1=scanner.nextInt();
		switch(n1){
		   case 1: stu_func();  break;
		   case 2: tea_func();  break;
		   case 3: adm_func();  break;
		   default: return;
		}
	}//UI
	
	public static void main(String[] args){
		file(); 	
    	for(;;){
    		UI();
    	}
    }
}
