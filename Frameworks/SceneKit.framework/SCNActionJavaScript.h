/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SceneKit/SCNAction.h>

@class NSString;

// Not exported
@interface SCNActionJavaScript : SCNAction
{
    NSString *_script;
}

+ (id)javaScriptActionWithDuration:(double)arg1 script:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithString:(id)arg1;

@end

