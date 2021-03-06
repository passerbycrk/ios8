/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface SGNames : NSObject
{
}

+ (id)bestName:(id)arg1;
+ (id)surnameFromName:(id)arg1;
+ (id)sketchesForName:(id)arg1;
+ (id)nameFromEmail:(id)arg1;
+ (_Bool)unnormalizedNamesApproximatelyMatch:(id)arg1 and:(id)arg2 threshold:(double)arg3;
+ (_Bool)unnormalizedNamesApproximatelyMatch:(id)arg1 and:(id)arg2;
+ (_Bool)namesApproximatelyMatch:(id)arg1 and:(id)arg2 threshold:(double)arg3;
+ (_Bool)namesApproximatelyMatch:(id)arg1 and:(id)arg2;
+ (double)unnormalizedNameSimilarity:(id)arg1 and:(id)arg2;
+ (double)nameSimilarity:(id)arg1 and:(id)arg2;
+ (id)cleanName:(id)arg1;
+ (id)stripHonorifics:(id)arg1;
+ (_Bool)isCommonNameWord:(id)arg1;
+ (void)initialize;

@end

