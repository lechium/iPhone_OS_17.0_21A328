//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDHealthServiceCharacteristic;

__attribute__((visibility("hidden")))
@interface _HDHealthServiceWriteOperation : NSObject
{
    _Bool _expectResponse;	// 8 = 0x8
    HDHealthServiceCharacteristic *_characteristic;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000078ff1b

@end

