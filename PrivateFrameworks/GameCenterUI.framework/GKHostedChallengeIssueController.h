/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterUI/GKHostedViewController.h>

@class GKChallenge, NSArray, NSString;

@interface GKHostedChallengeIssueController : GKHostedViewController
{
    _Bool _forcePicker;
    NSArray *_players;
    NSString *_defaultMessage;
    GKChallenge *_challenge;
    id _completionHandler;
    id _dismissCompletionHandler;
}

+ (_Bool)_preventsAppearanceProxyCustomization;
+ (void)presentHostedIssueControllerWithChallenge:(id)arg1 players:(id)arg2 defaultMessage:(id)arg3;
+ (id)presentationQueue;
+ (id)hostedIssueControllerWithChallenge:(id)arg1 players:(id)arg2 defaultMessage:(id)arg3 completionHandler:(id)arg4;
@property(copy, nonatomic) id dismissCompletionHandler; // @synthesize dismissCompletionHandler=_dismissCompletionHandler;
@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) _Bool forcePicker; // @synthesize forcePicker=_forcePicker;
@property(retain, nonatomic) GKChallenge *challenge; // @synthesize challenge=_challenge;
@property(copy, nonatomic) NSString *defaultMessage; // @synthesize defaultMessage=_defaultMessage;
@property(retain, nonatomic) NSArray *players; // @synthesize players=_players;
- (void)doneWithPlayers:(id)arg1 message:(id)arg2;
- (id)_remote;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (id)hostSideViewControllerClassName;
- (id)serviceSideViewControllerClassName;
- (void)dealloc;
- (id)initWithChallenge:(id)arg1 players:(id)arg2 defaultMessage:(id)arg3 completionHandler:(id)arg4;

@end

