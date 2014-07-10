/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OCDDocument.h>

@class ECMappingContext, EDProcessors, EDReference, EDResources, EDWarnings, ESDContainer, NSDate, NSMutableArray, NSString, OADTheme;

// Not exported
@interface EDWorkbook : OCDDocument
{
    EDResources *mResources;
    NSMutableArray *mOtherResources;
    EDProcessors *mProcessors;
    ECMappingContext *mMappingContext;
    EDWarnings *mWarnings;
    NSMutableArray *mSheets;
    EDReference *mVisibleRange;
    unsigned long long mActiveSheetIndex;
    NSDate *mDateBaseDate;
    int mDateBase;
    NSString *mFileName;
    NSString *mTemporaryDirectory;
    OADTheme *mTheme;
    NSMutableArray *mBulletBlips;
    ESDContainer *mEscherDrawingGroup;
}

- (id)bulletBlips;
- (void)setTheme:(id)arg1;
- (id)theme;
- (id)warnings;
- (void)applyProcessors;
- (id)processors;
- (void)setMappingContext:(id)arg1;
- (id)mappingContext;
- (void)setActiveSheet:(id)arg1;
- (id)activeSheet;
- (void)addSheet:(id)arg1;
- (unsigned long long)indexOfSheetWithName:(id)arg1;
- (unsigned long long)indexOfSheet:(id)arg1;
- (void)removeSheetAtIndex:(unsigned long long)arg1;
- (id)sheetAtIndex:(unsigned long long)arg1 loadIfNeeded:(_Bool)arg2;
- (id)sheetAtIndex:(unsigned long long)arg1;
- (unsigned long long)sheetCount;
- (void)setVisibleRange:(id)arg1;
- (id)visibleRange;
- (unsigned int)legacyDateBase;
- (void)setDateBase:(int)arg1;
- (int)dateBase;
- (id)dateBaseDate;
- (void)setTemporaryDirectory:(id)arg1;
- (id)temporaryDirectory;
- (id)fileName;
- (id)workbookName;
- (void)addOtherResources:(id)arg1;
- (void)setResources:(id)arg1;
- (id)resources;
- (void)dealloc;
- (id)initWithFileName:(id)arg1 andStringOptimization:(_Bool)arg2;
- (id)initWithStringOptimization:(_Bool)arg1;
- (id)init;
- (void)removeWorksheetAtIndex:(unsigned int)arg1;
- (void)setEscherDrawingGroup:(id)arg1;
- (id)escherDrawingGroup;
- (void)reduceMemoryIfPossible;
- (void)setActiveSheetIndex:(unsigned long long)arg1;
- (unsigned long long)activeSheetIndex;

@end
