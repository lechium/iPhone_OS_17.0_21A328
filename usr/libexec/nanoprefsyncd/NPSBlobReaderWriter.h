//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileHandle;

@interface NPSBlobReaderWriter : NSObject
{
    NSFileHandle *_fh;	// 8 = 0x8
    unsigned long long _offset;	// 16 = 0x10
    _Bool _done;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000232eb
- (_Bool)isFileGood;	// IMP=0x001000000002322b
- (void)close;	// IMP=0x00100000000231f9
- (id)readBlob;	// IMP=0x00100000000230df
- (void)writeBlob:(id)arg1;	// IMP=0x0010000000023024
- (id)initWithPathToLoadBlobFile:(id)arg1;	// IMP=0x0010000000022f37
- (id)initWithPathToCreateBlobFile:(id)arg1;	// IMP=0x0010000000022dd8

@end

