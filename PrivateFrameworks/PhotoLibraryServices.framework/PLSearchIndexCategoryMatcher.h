/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSString, PLSearchIndexCategoryInfo;

@interface PLSearchIndexCategoryMatcher : NSObject
{
    NSString *_searchString;
    NSMutableArray *_searchStringTokens;
    PLSearchIndexCategoryInfo *_categoryInfo;
    NSMutableArray *_matches;
}

+ (_Bool)parseCategoryData:(id)arg1 toCategoryInfo:(id)arg2;
+ (id)newCategoryDataForSearchIndexContents:(id)arg1 ranges:(id)arg2;
+ (_Bool)isCategoryDataValid:(id)arg1;
+ (_Bool)_isCategoryDataValid:(id)arg1 outPtr:(const char **)arg2 outEnd:(const char **)arg3;
- (id)newKeysMatchingSearchString:(id)arg1 albumTitle:(id)arg2;
- (id)newKeysMatchingSearchString:(id)arg1 categoryData:(id)arg2;
- (void)_doMatchSearchString;
- (void)_prepareToMatchSearchString:(id)arg1;
- (void)_updateSearchString:(id)arg1;
- (void)dealloc;
- (id)init;

@end
