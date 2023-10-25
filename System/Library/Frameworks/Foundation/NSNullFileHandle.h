//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSFileHandle.h"

__attribute__((visibility("hidden")))
@interface NSNullFileHandle : NSFileHandle
{
}

- (CDUnknownBlockType)readabilityHandler;	// IMP=0x00000000006419e9
- (void)setReadabilityHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000006419e3
- (CDUnknownBlockType)writeabilityHandler;	// IMP=0x00000000006419db
- (void)setWriteabilityHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000006419d5
- (int)fileDescriptor;	// IMP=0x00000000006419ca
- (_Bool)closeAndReturnError:(out id *)arg1;	// IMP=0x00000000006419c2
- (void)closeFile;	// IMP=0x00000000006419bc
- (_Bool)synchronizeAndReturnError:(out id *)arg1;	// IMP=0x00000000006419b4
- (void)synchronizeFile;	// IMP=0x00000000006419ae
- (_Bool)truncateAtOffset:(unsigned long long)arg1 error:(out id *)arg2;	// IMP=0x00000000006419a6
- (void)truncateFileAtOffset:(unsigned long long)arg1;	// IMP=0x00000000006419a0
- (_Bool)seekToOffset:(unsigned long long)arg1 error:(out id *)arg2;	// IMP=0x0000000000641998
- (void)seekToFileOffset:(unsigned long long)arg1;	// IMP=0x0000000000641992
- (_Bool)seekToEndReturningOffset:(out unsigned long long *)arg1 error:(out id *)arg2;	// IMP=0x000000000064197e
- (unsigned long long)seekToEndOfFile;	// IMP=0x0000000000641976
- (_Bool)getOffset:(out unsigned long long *)arg1 error:(out id *)arg2;	// IMP=0x0000000000641962
- (unsigned long long)offsetInFile;	// IMP=0x000000000064195a
- (_Bool)writeData:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000641952
- (void)writeData:(id)arg1;	// IMP=0x000000000064194c
- (id)readDataUpToLength:(unsigned long long)arg1 error:(out id *)arg2;	// IMP=0x0000000000641933
- (id)readDataOfLength:(unsigned long long)arg1;	// IMP=0x000000000064191a
- (id)readDataToEndOfFileAndReturnError:(out id *)arg1;	// IMP=0x0000000000641901
- (id)readDataToEndOfFile;	// IMP=0x00000000006418e8
- (id)availableData;	// IMP=0x00000000006418cf

@end
