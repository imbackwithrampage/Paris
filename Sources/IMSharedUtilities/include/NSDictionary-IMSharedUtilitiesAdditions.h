//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSNumber, NSString;

@interface NSDictionary (IMSharedUtilitiesAdditions)
+ (id)dictionaryWithMessageSummaryInfoData:(id)arg1;
+ (id)dictionaryWithAssociatedMessageSummary:(id)arg1 contentType:(unsigned char)arg2 pluginBundleID:(id)arg3 pluginDisplayName:(id)arg4;
- (unsigned long long)unsignedLongLongValueForKey:(id)arg1 withDefault:(unsigned long long)arg2;
- (long long)longLongValueForKey:(id)arg1 withDefault:(long long)arg2;
- (unsigned long long)unsignedLongValueForKey:(id)arg1 withDefault:(unsigned long long)arg2;
- (long long)longValueForKey:(id)arg1 withDefault:(long long)arg2;
- (float)floatValueForKey:(id)arg1 withDefault:(float)arg2;
- (double)doubleValueForKey:(id)arg1 withDefault:(double)arg2;
- (unsigned long long)unsignedIntegerValueForKey:(id)arg1 withDefault:(unsigned long long)arg2;
- (long long)integerValueForKey:(id)arg1 withDefault:(long long)arg2;
- (BOOL)boolValueForKey:(id)arg1 withDefault:(BOOL)arg2;
- (BOOL)isArchivable_im;
@property(readonly, nonatomic) NSString *__im_associatedMessagePluginDisplayName;
@property(readonly, nonatomic) NSString *__im_associatedMessagePluginBundleID;
@property(readonly, nonatomic) NSNumber *__im_associatedMessageContentType;
@property(readonly, nonatomic) NSString *__im_associatedMessageSummary;
@end
