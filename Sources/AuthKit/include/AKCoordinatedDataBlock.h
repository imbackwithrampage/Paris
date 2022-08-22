#import <Foundation/Foundation.h>
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group;

@interface AKCoordinatedDataBlock : NSObject
{
    id _block;
    id _completionHandler;
    BOOL _started;
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_group> *_group;
}

+ (id)startCoordinatingBlock:(id)arg1;

- (void)_callCompletionWithData:(id)arg1 error:(id)arg2;
- (void)_start;
- (void)setCompletion:(id)arg1;
- (void)start;
- (id)initWithBlock:(id)arg1;

@end
