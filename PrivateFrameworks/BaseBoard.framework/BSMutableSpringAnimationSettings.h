/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <BaseBoard/BSSpringAnimationSettings.h>

@class CAMediaTimingFunction;

@interface BSMutableSpringAnimationSettings : BSSpringAnimationSettings
{
}

@property(nonatomic) double epsilon;
@property(nonatomic) double damping;
@property(nonatomic) double stiffness;
@property(nonatomic) double mass;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property(nonatomic) double frameInterval;
@property(nonatomic) double delay;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
