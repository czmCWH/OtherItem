//
//  ZMTabBarControllerDelegate.h
//  UITabBarController的使用
//
//  Created by czm on 2019/11/15.
//  Copyright © 2019 czm. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZMTabBarControllerDelegate : NSObject<UITabBarControllerDelegate>

@property (nonatomic, assign)BOOL interactive;
@property (nonatomic, strong)UIPercentDrivenInteractiveTransition *interactiveTransition;

@end

NS_ASSUME_NONNULL_END
