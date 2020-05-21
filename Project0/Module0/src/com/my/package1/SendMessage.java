package com.my.package1;

import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.net.URL;
import java.net.URLConnection;

public class SendMessage {
    public static void main(String[] args) throws IOException {
        //1、    创建一个网址对象url
        URL url = new URL("https://www.baidu.com/");
        //2、    通过网址对象url，打开连接，并得到连接对象conn
        URLConnection conn = url.openConnection();
        //3、    通过连接对象conn，获取用于读取网页内容的  输入流  is （读取的内容是字节）
        InputStream is = conn.getInputStream();
        //4、将上述字节输入流 is 装饰为字符输入流
        //   再将字符输入流装饰为可一次读取一行的缓冲输入流 br
        BufferedReader br = new BufferedReader(new InputStreamReader(is,"UTF-8"));
        //5、通过输入流 br 读取一行文字，并赋值给变量text
        String text = br.readLine();
        //如果读取n行内容，重复执行n次step5即可
        //6、将读取的结果打印输出
        System.out.println(text);
    }

}
