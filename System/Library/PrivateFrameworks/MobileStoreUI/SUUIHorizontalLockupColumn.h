//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SUUIHorizontalLockupColumn : NSObject
{
    NSMutableArray *_childViewElements;	// 8 = 0x8
    long long _identifier;	// 16 = 0x10
    struct CGSize _size;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000336cc5
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSArray *childViewElements; // @synthesize childViewElements=_childViewElements;
- (id)description;	// IMP=0x0000000000336bc5
- (void)_addChildViewElement:(id)arg1;	// IMP=0x0000000000336baf
- (id)init;	// IMP=0x0000000000336b59

@end
