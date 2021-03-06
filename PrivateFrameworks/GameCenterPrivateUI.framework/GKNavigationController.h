/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UINavigationController.h"

#import "UIViewControllerRestoration-Protocol.h"

@class NSMutableArray;

@interface GKNavigationController : UINavigationController <UIViewControllerRestoration>
{
    NSMutableArray *_deferredTransitions;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
@property(retain, nonatomic) NSMutableArray *deferredTransitions; // @synthesize deferredTransitions=_deferredTransitions;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)_deferTransitionOfType:(int)arg1 withViewController:(id)arg2 animated:(_Bool)arg3;
- (void)_performDeferredTransition;
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;
- (void)willShowViewController:(id)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (void)setupGKNavigationController;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)init;

@end

