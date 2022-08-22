#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <AKAuthorizationViewHostDelegate-Protocol.h>

@class AKAuthorizationViewHelper, AKCredentialRequestContext, NSWindow;

@interface AKAuthorizationWindowController : NSWindowController <AKAuthorizationViewHostDelegate>
{
    BOOL _makeSheetCritical;
    BOOL _currentlyActive;
    NSWindow *_hostWindow;
    AKCredentialRequestContext *_credentialRequestContext;
    AKAuthorizationViewHelper *_helper;
    id _completion;
}


@property(copy, nonatomic) id completion; // @synthesize completion=_completion;
@property(retain) AKAuthorizationViewHelper *helper; // @synthesize helper=_helper;
@property BOOL currentlyActive; // @synthesize currentlyActive=_currentlyActive;
@property(readonly) AKCredentialRequestContext *credentialRequestContext; // @synthesize credentialRequestContext=_credentialRequestContext;
@property BOOL makeSheetCritical; // @synthesize makeSheetCritical=_makeSheetCritical;
@property __weak NSWindow *hostWindow; // @synthesize hostWindow=_hostWindow;
- (void)callCompletionWithAuthorization:(id)arg1 error:(id)arg2;
- (void)windowWillClose;
- (void)closeModal;
- (void)dismissModal;
- (void)runModalWithExistingViews;
- (void)runModalWithCompletion:(id)arg1;
- (void)_setupWithCompletion:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)init;

@end
