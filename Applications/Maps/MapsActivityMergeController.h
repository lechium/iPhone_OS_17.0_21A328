//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, RichMapsActivity;

@interface MapsActivityMergeController : NSObject
{
    NSArray *_activities;	// 8 = 0x8
    RichMapsActivity *_mergedActivity;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000ce92ed
- (long long)_forcedViewMode;	// IMP=0x0010000000ce921a
- (void)_mergeActivities;	// IMP=0x0010000000ce8d2a
- (void)_mergeActivitiesIfNeeded;	// IMP=0x0010000000ce8a9a
- (id)_performProcess;	// IMP=0x0010000000ce8a75
- (id)mergeActivities:(id)arg1;	// IMP=0x0010000000ce8a20

@end

