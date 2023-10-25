//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SKGArchiver : NSObject
{
    NSString *_resourcePath;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000003565b
@property(copy, nonatomic) NSString *resourcePath; // @synthesize resourcePath=_resourcePath;
- (_Bool)removeArchivePath:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003558a
- (_Bool)writeArchive:(id)arg1 name:(id)arg2 error:(id *)arg3;	// IMP=0x001000000003542a
- (_Bool)enumerateArchivePathsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000003508b
- (id)archivePaths;	// IMP=0x0010000000034c8a
- (id)archiverResourcePath;	// IMP=0x0010000000034c7c
- (id)initWithResourceDirectoryPath:(id)arg1;	// IMP=0x0010000000034c11

@end
