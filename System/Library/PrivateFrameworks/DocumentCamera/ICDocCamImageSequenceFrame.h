//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ICDocCamImageSequenceFrame : NSObject
{
    struct __CVBuffer *_pb;	// 8 = 0x8
    NSDictionary *_frameOptions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000287fb
@property(copy, nonatomic) NSDictionary *frameOptions; // @synthesize frameOptions=_frameOptions;
@property(nonatomic) struct __CVBuffer *pb; // @synthesize pb=_pb;

@end

