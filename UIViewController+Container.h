//
//  UIViewController+Container.h
//  UIViewController+Container
//
//  Created by Peter Paulis on 20.4.2013.
//  Copyright (c) 2013 Peter Paulis. All rights reserved.
//  min:60 - Building perfect apps - https://min60.com

#import <UIKit/UIKit.h>

@interface UIViewController (Container)

- (void)containerAddChildViewController:(UIViewController *)childViewController parentView:(UIView *)view __attribute__((deprecated(use containerAddChildViewController:toContainerView:)));

- (void)containerAddChildViewController:(UIViewController *)childViewController toContainerView:(UIView *)view useAutolayout:(BOOL)autolayout;

- (void)containerAddChildViewController:(UIViewController *)childViewController toContainerView:(UIView *)view;

- (void)containerAddChildViewController:(UIViewController *)childViewController;

- (void)containerRemoveChildViewController:(UIViewController *)childViewController;

@end
