//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DYDisplayLinkInterposer : NSObject
{
    id _target;	// 8 = 0x8
    SEL _sel;	// 16 = 0x10
    unsigned long long _endTimestamp;	// 24 = 0x18
}

- (void)dealloc;	// IMP=0x0000000000011266
- (void)forwardDisplayLinkCallback:(id)arg1;	// IMP=0x000000000001117a
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;	// IMP=0x00000000000110b0

@end
