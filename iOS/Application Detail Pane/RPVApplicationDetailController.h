//
//  RPVApplicationDetailController.h
//  iOS
//
//  Created by Matt Clarke on 14/07/2018.
//  Copyright © 2018 Matt Clarke. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RPVApplication;

@interface RPVApplicationDetailController : UIViewController

- (instancetype)initWithApplication:(RPVApplication*)application;

- (void)setCurrentSigningPercent:(int)percent;
- (void)setButtonTitle:(NSString*)title;

- (void)animateForPresentation;

@end
