/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AppleAccountUI/AAUIConfirmIdentityViewController.h>

#import "AAUIFamilySetupPage-Protocol.h"

@interface AAUIFamilySetupOrganizerViewController : AAUIConfirmIdentityViewController <AAUIFamilySetupPage>
{
    id <AAUIFamilySetupPageDelegate> _delegate;
}

@property(nonatomic) __weak id <AAUIFamilySetupPageDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)continueButtonWasTapped:(id)arg1;
- (_Bool)shouldShowInviteeInstructions;
- (id)titleForContinuebutton;
- (id)instructions;
- (id)pageTitle;
- (id)initWithAccount:(id)arg1 store:(id)arg2;

@end
