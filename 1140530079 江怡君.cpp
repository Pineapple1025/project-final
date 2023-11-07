#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime> 
using namespace std;
int show_event(int event);
int event_Result(int event,int &good, int &bad, int choice);  
int judge_result(int &good, int &bad);
int main()
{
	srand(time(NULL));
	int min=2, max=10, good=0, bad=0, event=0;
	int choice=0;
	int RandNum=rand()%(max-min+1)+min;
	event=1;
	
	cout<<"-------------大雄的一天-----------\n\n" //前言 
		  "媽:「大雄!起床了!!要遲到了快點起床!!」\n" 
		  "雄:「糟了，又要遲到了!」\n"
		  "雄:「哆啦A夢在書桌上留著紙條:『我有事情需要處理，這幾天不在，百寶袋留給你，有需要就用吧!』」\n\n"
		  "----------------------------------\n\n";
	cout<<"************事件開始!!************\n\n"; 
		  
	for(int i=0; i<5; i++) //連續執行四次 
	{
		event=rand()%(max-min+1)+min; //隨機產生一個數字
		show_event(event);  //對應數字的事件(含選項) 
		cin>>choice; //做出選擇
		while(choice!=1&&choice!=2) //若輸入1、2以外的數字需重新輸入直到正確 
		{
			cout<<"選項只有1跟2好嗎，AGAIN!!!\n";
			cin>>choice;
		 } 
		event_Result(event,good,bad,choice); //根據選擇給出結果
		system("pause");
		system("cls");
	}
	
	cout<<"多拉A夢終於回來了!!\n\n";
	cout<<"目前微笑值:"<<good<<endl;
	cout<<"目前邪惡值:"<<bad<<endl;
	judge_result(good, bad);
	
	return 0;
}
int show_event(int event) //事件(含選項) 
{
	if(event==1)
	{
		cout<<"散步時剛好遇見了胖虎與小夫，他們正在爭奪小夫新買的玩具\n"
			  "胖:「給我啦小夫，不然我揍你，你個叉子頭 」\n"
			  "夫:「怎麼可以這樣，我才剛買耶，你怎麼不自己去買一個啊，胖子」\n" 
		  	  "使用:1.竹蜻蜓、2.任意門\n";
	}
	else if(event==2)
	{
		cout<<"雄:「糟了，突然想起上次考試考零分被媽媽罵了，說著下次要是再考零分就沒有零用錢了」\n"
			<<"雄:「但是考試快要開始了，怎麼辦!」\n" 
			<<"使用1.記憶吐司、2.時光機\n";
	}
	else if(event==3)
	{
		cout<<"幫媽媽跑腿的路上，看見路邊有一個小女孩正在哭泣\n"
			<<"雄:「妳怎麼了?」\n"
			<<"女:「我找不到媽媽，她是不是不要我了嗚嗚嗚5555」\n" 
			<<"使用1.失物回歸噴霧、2.引路天使\n";
	}
	else if(event==4)
	{
		cout<<"經過空地的路上偶然看見胖虎跌進水溝，卡住無法掙脫，走去看看好了\n"
			<<"胖:「唉呦喂呀，怎麼辦啊大雄，我出不去!」\n"
			<<"雄:「真的耶笑死。」\n" 
			<<"使用1.縮小燈、2.倒立貼紙\n";
	}
	else if(event==5)
	{
		cout<<"老師在講數學，語調這麼平淡...好想睡覺啊Zzz\n"
			<<"師:「呃，這邊是個這樣子的啊，是不是啊各位同學?」\n" 
			<<"使用1.感動麥克風、2.美食桌巾\n";
	}
	else if(event==6)
	{
		cout<<"完了!在靜香家不小心砸到壞她媽媽最喜歡的花瓶，怎麼辦!\n"
			<<"靜:「大雄!!WTF!我媽媽應該快回家了，得趕快處理才行」\n" 
			<<"使用1.時光布、2.空氣砲\n";
	}
	else if(event==7)
	{
		cout<<"媽:「最近都在家裡隔離好無聊哦，真想出去玩玩。」\n"
			<<"雄:「我也好bored。」\n"
			<<"使用1.一打開就下雨的傘、2.室內旅行機\n";
	}
	else if(event==8)
	{
		cout<<"小杉家裡最近領養了一隻年幼的小貓，但是非常的怕生，大雄和其他人一起去小杉家吸貓貓\n"
			<<"杉:「不要太靠近牠，牠甚至會抓人!」\n"
			<<"雄:「惡魔貓男。」\n" 
			<<"使用1.桃太郎飯糰、2.忠犬好友\n";
	}
	else if(event==9)
	{
		cout<<"媽:「大雄，快去院子裡拔雜草，沒拔完不可以吃飯!」\n"
			<<"雄:「什麼...還要出公差哦?可以加點嗎?但是現在好熱...真想睡午覺Zzz」\n"
			<<"使用1.隱形斗篷、2.阿拉丁神燈\n";
	}
	else if(event==10)
	{
		cout<<"親戚與他的小孩突然來訪，年僅三歲的小男孩吵著要大雄陪玩\n"
			<<"男:「陪我玩啦，玩嘛玩嘛玩嘛玩嘛玩嘛~~」\n"
			<<"雄:「真是拿你沒辦法」\n" 
			<<"使用1.凝雲瓦斯、2.怨恨頭巾\n";
	}
}
int event_Result(int event,int &good,int &bad, int  choice) //選項(含結果) //使用call by reference直接更改good、bad  
{
	if(event==1&&choice==1)
	{
		cout<<"你選擇把竹蜻蜓借給小夫，幫助他脫離困境，微笑值+1\n";
		good+=1;
		cout<<"目前微笑值:"<<good<<endl;
		cout<<"目前邪惡值:"<<bad<<endl<<endl; 
	}
	else if(event==1&&choice==2)
	{
		cout<<"你選擇使用任意門搶走玩具並據其為己有，邪惡值+1\n";
		bad+=1;
		cout<<"目前微笑值:"<<good<<endl;
		cout<<"目前邪惡值:"<<bad<<endl<<endl; 
	}
	else if(event==2&&choice==1)
	{
		cout<<"你用記憶吐司臨時抱佛腳，其實就是作弊!，邪惡值+2\n";
		bad+=2;
		cout<<"目前微笑值:"<<good<<endl;
		cout<<"目前邪惡值:"<<bad<<endl<<endl; 	 
	}
	else if(event==2&&choice==2)
	{
		cout<<"你使用時光機回到一個禮拜前埋頭苦讀，當個正直的人!微笑值+2\n";
		good+=2;
		cout<<"目前微笑值:"<<good<<endl;
		cout<<"目前邪惡值:"<<bad<<endl<<endl; 
	}
    else if(event==3&&choice==1)
	{
		cout<<"居然說小女孩是遺失物品，邪惡值+1\n";
		bad+=1;
		cout<<"目前微笑值:"<<good<<endl;
		cout<<"目前邪惡值:"<<bad<<endl<<endl; 
	}
	else if(event==3&&choice==2)
	{
		cout<<"引路天使順利地引導小女孩踏上回家的道路，微笑值+1\n";
		good+=1;
		cout<<"目前微笑值:"<<good<<endl;
		cout<<"目前邪惡值:"<<bad<<endl<<endl; 
	}
	else if(event==4&&choice==1)
	{
		cout<<"縮小燈讓胖虎變小後成功離開了水溝，微笑值+2\n";
		good+=2;
		cout<<"目前微笑值:"<<good<<endl;
		cout<<"目前邪惡值:"<<bad<<endl<<endl; 
	}
	else if(event==4&&choice==2)
	{
		cout<<"把倒立貼紙黏在胖虎身上，胖虎喝了好多水溝裡的水，邪惡值+2\n";
		bad+=2;
		cout<<"目前微笑值:"<<good<<endl;
		cout<<"目前邪惡值:"<<bad<<endl<<endl;  
	}
    else if(event==5&&choice==1)
	{
		cout<<"把感動麥克風給了老師，瞬間覺得課程引人入勝且令人感動，讓人想一聽再聽，微笑值+1\n";
		good+=1;
		cout<<"目前微笑值:"<<good<<endl;
		cout<<"目前邪惡值:"<<bad<<endl<<endl; 
	}
	else if(event==5&&choice==2)
	{
		cout<<"把美食桌巾鋪在書桌上開始大吃特吃，因為吃東西就不會想睡了~但是上課不能吃東西!!，邪惡值+1\n";
		bad+=1;
		cout<<"目前微笑值:"<<good<<endl;
		cout<<"目前邪惡值:"<<bad<<endl<<endl; 
	}
	else if(event==6&&choice==1)
	{
		cout<<"時光布順利的把花瓶回復原狀了，順便修了家裡其他壞掉的設施，微笑值+2\n";
		good+=2;
		cout<<"目前微笑值:"<<good<<endl;
		cout<<"目前邪惡值:"<<bad<<endl<<endl; 
	}
	else if(event==6&&choice==2)
	{
		cout<<"你使用了空氣砲把家裡其他東西砸壞，偽裝成遭小偷的樣子，邪惡值+2\n";
		bad+=2;
		cout<<"目前微笑值:"<<good<<endl;
		cout<<"目前邪惡值:"<<bad<<endl<<endl; 
	}
	else if(event==7&&choice==1)
	{
		cout<<"告訴媽媽如果淋溼了就不會想出門了，結果媽媽感冒了，邪惡值+3\n";
		bad+=3;
		cout<<"目前微笑值:"<<good<<endl;
		cout<<"目前邪惡值:"<<bad<<endl<<endl; 
	}
	else if(event==7&&choice==2)
	{
		cout<<"使用室內旅行機帶媽媽到世界各國遊覽了數不勝數的名勝，媽媽十分開心，微笑值+3\n";
		good+=3;
		cout<<"目前微笑值:"<<good<<endl;
		cout<<"目前邪惡值:"<<bad<<endl<<endl; 
	}
	else if(event==8&&choice==1)
	{
		cout<<"將桃太郎飯糰給小貓吃下之後成為溫馴小貓，大家吸貓吸得很開心，微笑值+1\n";
		good+=1;
		cout<<"目前微笑值:"<<good<<endl;
		cout<<"目前邪惡值:"<<bad<<endl<<endl; 
	}
	else if(event==8&&choice==2)
	{
		cout<<"召喚出忠犬好友來跟小貓當朋友，結果那隻狗跟小貓打了一架，邪惡值+1\n";
		bad+=1;
		cout<<"目前微笑值:"<<good<<endl;
		cout<<"目前邪惡值:"<<bad<<endl<<endl; 
	}
	else if(event==9&&choice==1)
	{
		cout<<"把隱形斗篷披在身上之後睡了個舒服的午覺，太偷懶了!，邪惡值+2\n";
		bad+=2;
		cout<<"目前微笑值:"<<good<<endl;
		cout<<"目前邪惡值:"<<bad<<endl<<endl; 
	}
	else if(event==9&&choice==2)
	{
		cout<<"召喚神燈裡的精靈，八百公尺，五百公尺，降肉，降肉，順便澆水+煮飯+做家事，分擔家務，微笑值+2\n";
		good+=2;
		cout<<"目前微笑值:"<<good<<endl;
		cout<<"目前邪惡值:"<<bad<<endl<<endl; 
	}
	else if(event==10&&choice==1)
	{
		cout<<"將凝雲瓦斯噴在雲朵上，帶著小男孩在雲朵上暢玩APEX，度過了快樂的時光，微笑值+3\n";
		good+=3;
		cout<<"目前微笑值:"<<good<<endl;
		cout<<"目前邪惡值:"<<bad<<endl<<endl; 
	}
	else if(event==10&&choice==2)
	{
		cout<<"用怨恨頭巾把自己變成鬼魂向一直打擾自己的小男孩報復，邪惡值+3\n";
		bad+=3;
		cout<<"目前微笑值:"<<good<<endl;
		cout<<"目前邪惡值:"<<bad<<endl; 
	}
 } 
int judge_result(int &good, int &bad) //判斷邪惡值微笑值的大小關係，並輸出對應結果 
{
	if(bad==good)
	{
		cout<<"你的邪惡值與微笑值相等，看來是個普通的人\n\n" 
			  "哆:「哈哈，抱歉啊大雄，臨時這樣跑回去22世紀，因為哆啦美身體出狀況了，聽說是機器界的大病」\n"
			  "哆:「怪醫黑傑克治療之後狀況就好很多了，所以我就馬上回來看你了」\n"
			  "哆:「但是感覺你過得不錯嘛」\n" 
			  "雄:「原來是這樣，不過幸好你回來了，不然好無聊哦」\n"
			  "接下來哆啦A夢和大雄愉快的聊了好一陣子，分享了很多這陣子發生的事情。歡迎回來，哆啦A夢。\n\n"
			  "EEEEEE  NN    N  DDDDD\n"  
			  "E       N N   N  D    D\n"
			  "EEEEEE  N  N  N  D     D\n"
			  "E       N   N N  D    D\n"
			  "EEEEEE  N    NN  DDDDD";
	}
	else if(bad>good)
	{
		cout<<"你的邪惡值大於微笑值，看來是個壞小孩\n\n" 
		      "哆:「終於回來了，大雄這幾天過得怎麼樣啊?」\n"
			  "雄:「還...還可以啊 」\n" 
			  "哆:「是嗎，雖然我離開了一陣子，但其實我都有在默默關注你」\n"
			  "哆:「包括你做的壞事我可是看的一清二楚!」\n"
			  "哆:「你這個bad boy!!」\n"
			  "後來大雄被哆啦A夢碎念了好一陣子，被懲罰一個禮拜不能使用道具了。可撥，野比大雄。\n\n"
			  "EEEEEE  NN    N  DDDDD\n"  
			  "E       N N   N  D    D\n"
			  "EEEEEE  N  N  N  D     D\n"
			  "E       N   N N  D    D\n"
			  "EEEEEE  N    NN  DDDDD";
	}
	else if(bad<good)
	{
		cout<<"你的微笑值大於微笑值，看來是個乖寶寶\n\n"
			  "哆:「終於回來了，大雄這幾天過得怎麼樣啊?」\n"
			  "雄:「算是不錯吧!多虧了哆啦A夢的百寶袋，幫了我很多的忙」\n"
			  "雄:「但是道具不是你拿出來就感覺哪裡不對哈哈」\n"
			  "哆:「雖然我離開了一陣子，但還是有在背後默默關注你」\n"
			  "哆:「雖然你笨歸笨，但還是很善良的!這也是為什麼我離開了這麼久」\n"
			  "雄:「什麼意思?」\n"
			  "哆:「登登!這是我回22世紀排隊買回來的PS200，我可是排了七七四十九天」\n"
			  "哆:「這是你做為一個乖寶寶的獎勵!\n"
			  "雄:「好耶!!來玩吧!!大戰三百回合!!!!」\n"
			  "後來大雄和哆啦A夢愉快的用PS200玩耍，也邀請靜香他們一同遊玩。謝謝你，哆啦A夢，歡迎回來。\n\n"
			  "EEEEEE  NN    N  DDDDD\n"  
			  "E       N N   N  D    D\n"
			  "EEEEEE  N  N  N  D     D\n"
			  "E       N   N N  D    D\n"
			  "EEEEEE  N    NN  DDDDD"; 
	}
}
 
 

