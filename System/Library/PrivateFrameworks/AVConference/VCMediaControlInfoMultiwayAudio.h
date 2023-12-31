//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCMediaControlInfoMultiwayAudio
{
    unsigned int _controlInfoROC;	// 68 = 0x44
    unsigned int _controlInfoMKI;	// 72 = 0x48
}

- (int)serializeToBuffer:(char *)arg1 bufferLength:(unsigned long long)arg2 blobLength:(unsigned long long *)arg3;	// IMP=0x000000000047290a
- (int)getInfo:(void *)arg1 bufferLength:(unsigned long long)arg2 infoSize:(unsigned long long *)arg3 type:(unsigned int)arg4;	// IMP=0x000000000047289f
- (_Bool)hasInfoType:(unsigned int)arg1;	// IMP=0x000000000047287b
- (int)setInfo:(void *)arg1 size:(unsigned long long)arg2 type:(unsigned int)arg3;	// IMP=0x0000000000472754
- (int)configureWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_51b15958 *)arg3;	// IMP=0x0000000000472680
- (id)description;	// IMP=0x00000000004725bc
- (unsigned long long)serializedSize;	// IMP=0x00000000004725b2
- (id)initWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_51b15958 *)arg3 version:(unsigned char)arg4;	// IMP=0x0000000000472545
- (id)init;	// IMP=0x000000000047222b

@end

