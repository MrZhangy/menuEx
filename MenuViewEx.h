//
//  MenuViewEx.h
//  TableViewDemo
//
//  Created by zhangyafeng on 15/5/9.
//  Copyright (c) 2015年 think. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MenuViewEx : UIView
-(id)initWithFrame:(CGRect)frame topView:(UIView*)topView bottomView:(UIView*)bottomView;

/**在对用的scrollview类簇上添加手势，以实现垂直方向的联动推拽*/
-(void)addGestureOfView:(id)view;
@end
