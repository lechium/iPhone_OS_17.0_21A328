//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol APSUserTrackerResponder;

@interface APSProcessModeUserTracker : NSObject
{
    MISSING_TYPE *responder;	// 8 = 0x8
    MISSING_TYPE *multiUserMode;	// 16 = 0x10
    MISSING_TYPE *systemModeUser;	// 24 = 0x18
    MISSING_TYPE *userModeUser;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00400000000c78f0
- (id)init;	// IMP=0x00100000000c7890
- (id)initWithMultiUserMode:(id)arg1;	// IMP=0x00100000000c7850
@property(nonatomic) __weak id <APSUserTrackerResponder> responder; // @synthesize responder;

@end

