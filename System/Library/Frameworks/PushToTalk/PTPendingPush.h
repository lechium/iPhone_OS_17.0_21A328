//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSUUID;

__attribute__((visibility("hidden")))
@interface PTPendingPush : NSObject
{
    NSUUID *_uuid;	// 8 = 0x8
    NSDictionary *_payload;	// 16 = 0x10
    CDUnknownBlockType _reply;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000001dbb
@property(copy, nonatomic) CDUnknownBlockType reply; // @synthesize reply=_reply;
@property(retain, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

@end

