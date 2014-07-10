/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CoreThemeDocument;

@interface TDThemeSchema : NSObject
{
    CoreThemeDocument *_doc;
}

+ (_Bool)loadThemeConstantsForEntity:(id)arg1 inContext:(id)arg2;
- (void)resetThemeConstants;
- (void)loadSchemaDefinitions;
- (void)loadSchemaCategories;
- (void)loadStandardEffectDefinitions;
- (void)loadTemplateRenderingModeConstants;
- (void)loadEffectConstants;
- (void)loadDefaultFontCustomizations;
- (void)loadMetafontSizes;
- (void)loadMetafontSelectors;
- (void)loadArtworkDraftTypes;
- (void)loadColorStatuses;
- (void)loadColorNames;
- (void)loadZeroCodeArtworkInfo;
- (void)loadRenditionSubtypes;
- (void)loadRenditionTypes;
- (void)loadThemeDefaultLook;
- (void)loadThemeLooks;
- (void)loadIterationTypes;
- (void)loadThemeUISizeClasses;
- (void)loadThemeIdioms;
- (void)loadThemeDrawingLayers;
- (void)loadThemeDirections;
- (void)loadThemePresentationStates;
- (void)loadThemeStates;
- (void)loadBasicThemePart;
- (void)loadThemeParts;
- (void)loadThemeElements;
- (void)loadThemeValues;
- (void)loadThemeSizes;
- (void)sanityCheckAndUpdateDocumentIfNecessary;
- (void)_sanityCheckSchemaAssets;
- (_Bool)_renditionKey:(const struct _renditionkeytoken *)arg1 isEqualToKeyIgnoringLook:(const struct _renditionkeytoken *)arg2;
- (void)_sanityCheckSchemaDefinitionsAndUpdateIfNecessary;
- (void)_sanityCheckSchemaCategoriesAndUpdateIfNecessary;
- (void)_addSchemaPartDefinitionsForStandardElement:(const CDStruct_e3362728 *)arg1 withElement:(id)arg2;
- (void)_sanityCheckSchemaPartDefinitionsForStandardElement:(const CDStruct_e3362728 *)arg1 withElement:(id)arg2;
- (void)_sanityCheckColorNamesAndUpdateIfNecessary;
- (void)_sanityCheckMetafontSizeSelectorsAndUpdateIfNecessary;
- (void)_sanityCheckObjectsWithEntityName:(id)arg1 globalDescriptor:(void *)arg2 matchIdentifierOnly:(_Bool)arg3;
- (void)dealloc;
- (id)initWithThemeDocument:(id)arg1;

@end
