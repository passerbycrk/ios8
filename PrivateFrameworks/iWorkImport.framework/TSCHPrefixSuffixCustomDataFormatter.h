/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCHCustomDataFormatter.h>

@class NSString;

// Not exported
@interface TSCHPrefixSuffixCustomDataFormatter : TSCHCustomDataFormatter
{
    NSString *mPrefixString;
    NSString *mSuffixString;
}

+ (id)dataFormatterWithCustomFormatWrapper:(id)arg1 customFormatListKey:(unsigned int)arg2 prefixString:(id)arg3 suffixString:(id)arg4;
- (id)bakeableNumberFormat;
- (id)chartFormattedStringForValue:(id)arg1;
- (id)p_formattedStringWithBodyString:(id)arg1;
- (void)dealloc;
- (id)initWithCustomFormatWrapper:(id)arg1 customFormatListKey:(unsigned int)arg2 prefixString:(id)arg3 suffixString:(id)arg4;

@end

