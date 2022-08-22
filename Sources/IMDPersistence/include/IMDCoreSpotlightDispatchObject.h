//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class CRRecentContactsLibrary;

@interface IMDCoreSpotlightDispatchObject : NSObject
{
    BOOL _allowsOverrideOfObjects;
    BOOL _shouldAddToSuggestions;
    BOOL _shouldAddToSpotlight;
    BOOL _shouldAddToCoreRecents;
    CRRecentContactsLibrary *_recentsInstance;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL shouldAddToCoreRecents; // @synthesize shouldAddToCoreRecents=_shouldAddToCoreRecents;
@property(nonatomic) BOOL shouldAddToSpotlight; // @synthesize shouldAddToSpotlight=_shouldAddToSpotlight;
@property(nonatomic) BOOL shouldAddToSuggestions; // @synthesize shouldAddToSuggestions=_shouldAddToSuggestions;
@property(nonatomic) BOOL allowsOverrideOfObjects; // @synthesize allowsOverrideOfObjects=_allowsOverrideOfObjects;
@property(nonatomic) CRRecentContactsLibrary *recentsInstance; // @synthesize recentsInstance=_recentsInstance;
- (void)dealloc;
- (id)init;

@end
