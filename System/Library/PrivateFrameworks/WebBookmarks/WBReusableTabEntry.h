//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol WBReusableTab;

__attribute__((visibility("hidden")))
@interface WBReusableTabEntry : NSObject
{
    id <WBReusableTab> _reusableTab;	// 8 = 0x8
    NSDate *_dateCreated;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000084899
@property(readonly, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(readonly, nonatomic) id <WBReusableTab> reusableTab; // @synthesize reusableTab=_reusableTab;
- (id)initWithReusableTab:(id)arg1;	// IMP=0x00000000000847b5

@end
