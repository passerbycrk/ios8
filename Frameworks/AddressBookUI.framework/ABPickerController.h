/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UINavigationController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSArray, NSIndexPath, NSString, UITableViewController;

@interface ABPickerController : UINavigationController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate>
{
    _Bool _allowsCustomItems;
    NSString *_selectedItem;
    NSArray *_builtinItems;
    NSArray *_customItems;
    NSString *_itemLocalizationKey;
    UITableViewController *_tableViewController;
    NSIndexPath *_selectedIndexPath;
}

@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) UITableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
@property(copy, nonatomic) NSString *itemLocalizationKey; // @synthesize itemLocalizationKey=_itemLocalizationKey;
@property(nonatomic) _Bool allowsCustomItems; // @synthesize allowsCustomItems=_allowsCustomItems;
@property(copy, nonatomic) NSArray *customItems; // @synthesize customItems=_customItems;
@property(copy, nonatomic) NSArray *builtinItems; // @synthesize builtinItems=_builtinItems;
@property(retain, nonatomic) NSString *selectedItem; // @synthesize selectedItem=_selectedItem;
- (id)_itemAtIndexPath:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)removeCustomItem:(id)arg1;
- (void)customLabelUpdated:(id)arg1;
- (void)donePicker:(id)arg1;
- (void)cancelPicker:(id)arg1;
- (id)titleForAddCustomItem;
- (id)titleForPickerItem:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(nonatomic) id <ABPickerControllerDelegate> delegate;

@end

