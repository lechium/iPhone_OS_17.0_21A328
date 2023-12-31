//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary;

__attribute__((visibility("hidden")))
@interface MADImageASTCFormatReader : NSObject
{
    NSData *_dataStream;	// 8 = 0x8
    unsigned long long _start;	// 16 = 0x10
    unsigned long long _end;	// 24 = 0x18
    unsigned long long _numImagesRemaining;	// 32 = 0x20
    NSDictionary *_plist;	// 40 = 0x28
}

+ (_Bool)isValidASTCExtension:(id)arg1;	// IMP=0x0060000000204817
- (void).cxx_destruct;	// IMP=0x00000000002052c3
- (struct CGImageSource *)readNextImageSource;	// IMP=0x0000000000205280
- (struct CGImageSource *)readOneImageSource;	// IMP=0x0000000000204fa6
- (int)readPList;	// IMP=0x0000000000204b2c
- (int)readDataToBuffer:(void *)arg1 Position:(unsigned long long)arg2 Length:(unsigned long long)arg3;	// IMP=0x00000000002049b2
- (id)initWithData:(id)arg1;	// IMP=0x0000000000204833

@end

