//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _UIDebugIssueReport : NSObject
{
    NSMutableArray *_mutableIssues;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000007efff9
- (void)addIssue:(id)arg1;	// IMP=0x00000000007eff40
@property(readonly, copy, nonatomic) NSArray *issues;
- (id)init;	// IMP=0x00000000007efecc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
