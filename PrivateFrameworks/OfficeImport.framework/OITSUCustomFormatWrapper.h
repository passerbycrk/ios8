/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface OITSUCustomFormatWrapper : NSObject
{
    struct TSUCustomFormat *mCustomFormat;
}

- (const CDStruct_b87b2d04 *)conditionalFormatDataForValue:(double)arg1;
- (const CDStruct_b87b2d04 *)defaultFormatData;
- (int)formatType;
- (id)formatName;
- (const struct TSUCustomFormat *)pointerToTSUCustomFormat;
- (id)initWithCustomFormat:(struct TSUCustomFormat *)arg1;

@end

