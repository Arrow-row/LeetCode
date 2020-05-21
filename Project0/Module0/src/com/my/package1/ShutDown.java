package com.my.package1;

import java.io.IOException;
import java.util.Scanner;

public class ShutDown {
    public static void main(String[] args) throws IOException {
        System.out.println("欢迎使用自动关机程序，请输入倒计时关机秒数：");
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        System.out.println(s);
        //Runtime.getRuntime().exec("shutdown -s -t " + s);
        //Runtime.getRuntime().exec("shutdown -a");
    }
}
