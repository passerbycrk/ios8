/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebCore/DOMCSSRule.h>

@class DOMCSSRuleList, DOMMediaList;

// Not exported
@interface DOMCSSMediaRule : DOMCSSRule
{
}

- (void)deleteRule:(unsigned int)arg1;
- (unsigned int)insertRule:(id)arg1:(unsigned int)arg2;
- (unsigned int)insertRule:(id)arg1 index:(unsigned int)arg2;
@property(readonly) DOMCSSRuleList *cssRules;
@property(readonly) DOMMediaList *media;

@end
