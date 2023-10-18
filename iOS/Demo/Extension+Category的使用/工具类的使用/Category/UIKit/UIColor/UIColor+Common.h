//
//  UIColor+Common.h
//  工具类的使用
//
//  Created by czm on 2019/11/7.
//  Copyright © 2019 czm. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (Common)

// 根据十六进制数 生成颜色类 如：0xff1fb6c1
+ (UIColor *)colorWithCode:(NSUInteger)hex;

// 根据html对应的色值 生成颜色类 如：#000000
+ (UIColor *)colorWithHexString:(NSString *)stringToConvert;

// 根据RGBHex 生成颜色类 如：000000
+ (UIColor *)colorWithRGBHexStr:(NSString *)str;

// 根据html对应的色值(可以设置透明度) 生成颜色类 如：#000000
+ (UIColor *)colorWithHexString:(NSString *)hexString
                          alpha:(float)alpha;

//随机颜色
+ (UIColor *)getJYRandomColor;
//随机颜色(透明度)
+ (UIColor *)getJYRandomColorWithAlpha:(float)alpha;

//渐变颜色(开始颜色，结束颜色，渐变高度)
+ (UIColor *)getJYGradientColorFromColor:(UIColor*)c1 toColor:(UIColor*)c2 withHeight:(int)height;


@end

NS_ASSUME_NONNULL_END
