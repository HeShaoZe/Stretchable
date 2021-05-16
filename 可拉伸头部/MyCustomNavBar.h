//
//  MyCustomNavBar.h
//  可拉伸头部
//
//  Created by hesz on 2021/5/16.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface MyCustomNavBar : UIView
@property(nonatomic, strong)NSString *title;
@property(nonatomic, strong)UIColor *titleColor;
@property(nonatomic, strong)NSString *leftImage;
@property(nonatomic, strong)NSString *rightImage;

@end

NS_ASSUME_NONNULL_END
