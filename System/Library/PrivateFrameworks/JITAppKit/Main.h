//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface Main : NSObject
{
    NSString *_path;	// 8 = 0x8
    NSString *_fileName;	// 16 = 0x10
    void *_zip;	// 24 = 0x18
}

+ (id)dateWithMicrosoftDOSFormat:(unsigned int)arg1;	// IMP=0x0060000000015a80
+ (_Bool)createZipFileAtPath:(id)arg1 withContentsOfDirectory:(id)arg2 keepParentDirectory:(_Bool)arg3;	// IMP=0x0060000000014a00
+ (_Bool)createZipFileAtPath:(id)arg1 withContentsOfDirectory:(id)arg2;	// IMP=0x0060000000014970
+ (_Bool)createZipFileAtPath:(id)arg1 withFilesAtPaths:(id)arg2;	// IMP=0x0060000000014690
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(_Bool)arg3 password:(id)arg4 error:(id *)arg5 delegate:(id)arg6 progressHandler:(CDUnknownBlockType)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x0060000000012a60
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0060000000012950
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(_Bool)arg3 password:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0060000000012800
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(_Bool)arg3 password:(id)arg4 error:(id *)arg5 delegate:(id)arg6;	// IMP=0x00600000000126d0
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 delegate:(id)arg3;	// IMP=0x00600000000125f0
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(_Bool)arg3 password:(id)arg4 error:(id *)arg5;	// IMP=0x00600000000124f0
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2;	// IMP=0x0060000000012460
- (void).cxx_destruct;	// IMP=0x0000000000015ca0
@property(readonly, nonatomic) _Bool close;
- (_Bool)writeData:(id)arg1 fileName:(id)arg2;	// IMP=0x0000000000015860
- (_Bool)writeFileAtPath:(id)arg1 withFileName:(id)arg2;	// IMP=0x0000000000015430
- (_Bool)writeFile:(id)arg1;	// IMP=0x00000000000153c0
- (_Bool)writeFolderAtPath:(id)arg1 withFolderName:(id)arg2;	// IMP=0x00000000000150b0
- (void)zipInformation:(CDStruct_192a48cb *)arg1 setDate:(id)arg2;	// IMP=0x0000000000014f60
@property(readonly, nonatomic) _Bool open;
- (id)initWithPath:(id)arg1;	// IMP=0x0000000000014e20

@end

