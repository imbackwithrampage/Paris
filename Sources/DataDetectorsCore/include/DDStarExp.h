//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DDUnaryOperator.h>

__attribute__((visibility("hidden")))
@interface DDStarExp : DDUnaryOperator
{
}

- (BOOL)acceptEmptyWordWithManager:(id)arg1;
- (void)appendDescriptionToString:(id)arg1 depth:(int)arg2;
- (id)prettyPrintWithPriority:(int)arg1;
- (id)symbolsInGrammar:(id)arg1 container:(id)arg2 withManager:(id)arg3;
- (void)appendToDescription:(id)arg1 priority:(int)arg2 withManager:(id)arg3;

@end
