/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ITMLKit/IKJSObject.h>

#import "IKJSDOMXPathExpression-Protocol.h"

@interface IKDOMXPathExpression : IKJSObject <IKJSDOMXPathExpression>
{
    id _evaluatingBlock;
}

@property(copy, nonatomic) id evaluatingBlock; // @synthesize evaluatingBlock=_evaluatingBlock;
- (void).cxx_destruct;
- (id)evaluate:(id)arg1:(long long)arg2:(id)arg3;
- (id)initWithAppContext:(id)arg1 evaluatingBlock:(id)arg2;

@end
