//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCMockIDSDatagramChannel;

__attribute__((visibility("hidden")))
@interface VCMockIDSDatagramChannelController
{
    VCMockIDSDatagramChannel *_datagramChannel;	// 88 = 0x58
}

+ (id)sharedInstance;	// IMP=0x0060000000365fee
- (void)setReadyToReadBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000036631d
- (void)setWriteDatagramBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003662cf
- (void)setWriteDatagramsBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000366281
- (void)invalidate;	// IMP=0x0000000000366238
- (void)dealloc;	// IMP=0x00000000003661d3
- (id)datagramChannelRequiresOptions:(_Bool)arg1 dataPath:(int)arg2;	// IMP=0x0000000000366047
- (id)datagramChannelRequiresOptions:(_Bool)arg1;	// IMP=0x0000000000366033

@end

