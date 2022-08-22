//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BacklightSystemDelegateXpcProtocol-Protocol.h>

@class BrightnessSystemClientInternal, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BrightnessSystemClientExportedObj : NSObject <BacklightSystemDelegateXpcProtocol>
{
    id clientBlock;
    NSObject<OS_dispatch_queue> *queue;
    BrightnessSystemClientInternal *_target;
}

@property(nonatomic) BrightnessSystemClientInternal *target; // @synthesize target=_target;
- (void)notifyChangedProperty:(id)arg1 value:(id)arg2;
- (void)dealloc;
- (void)registerNotificationBlock:(id)arg1;
- (void)unregisterNotificationBlock;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
