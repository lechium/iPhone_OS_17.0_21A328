//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOutputStream;

__attribute__((visibility("hidden")))
@interface BRCStreamWriter : NSObject
{
    NSOutputStream *_outputStream;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000184a10
- (void)dealloc;	// IMP=0x00000000001849d2
- (void)close;	// IMP=0x000000000018496c
- (void)appendString:(id)arg1;	// IMP=0x0000000000184891
- (id)initWithOutputStream:(id)arg1;	// IMP=0x0000000000184815

@end

