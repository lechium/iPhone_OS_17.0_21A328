//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (Foundation)
+ (id)newWithContentsOf:(id)arg1 immutable:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00500000006336ff
+ (id)newWithContentsOf:(id)arg1 immutable:(_Bool)arg2;	// IMP=0x0050000000633562
+ (id)dictionaryWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x005000000063352e
+ (id)dictionaryWithContentsOfURL:(id)arg1;	// IMP=0x00500000006334ff
+ (id)dictionaryWithContentsOfFile:(id)arg1;	// IMP=0x00500000006334d0
+ (_Bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;	// IMP=0x0050000000632f98
+ (_Bool)supportsSecureCoding;	// IMP=0x0050000000632871
- (id)__swift_objectForKeyedSubscript:(id)arg1;	// IMP=0x0010000000378140
- (id)__swiftInitWithDictionary_NSDictionary:(id)arg1;	// IMP=0x0010000000378a10
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x001000000063391b
- (id)initWithContentsOfURL:(id)arg1;	// IMP=0x00100000006338e4
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x00100000006338ad
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x00100000006333cd
- (_Bool)writeToURL:(id)arg1 atomically:(_Bool)arg2;	// IMP=0x00100000006332ca
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2;	// IMP=0x0010000000633173
- (id)_stringToWrite;	// IMP=0x0010000000633119
- (id)descriptionInStringsFileFormat;	// IMP=0x0010000000632fa0
- (Class)classForCoder;	// IMP=0x0010000000632f87
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000632879
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000632314
- (id)_web_objectForMIMEType:(id)arg1;	// IMP=0x0010000000633b5c
- (id)_web_numberForKey:(id)arg1;	// IMP=0x0010000000633b2c
- (id)_web_stringForKey:(id)arg1;	// IMP=0x0010000000633afc
- (int)_web_intForKey:(id)arg1;	// IMP=0x0010000000633ad1
- (id)fileGroupOwnerAccountID;	// IMP=0x00100000006462b4
- (id)fileOwnerAccountID;	// IMP=0x001000000064629b
- (id)fileCreationDate;	// IMP=0x0010000000646282
- (_Bool)fileIsAppendOnly;	// IMP=0x0010000000646250
- (_Bool)fileIsImmutable;	// IMP=0x001000000064621e
- (unsigned int)fileHFSTypeCode;	// IMP=0x00100000006461ec
- (unsigned int)fileHFSCreatorCode;	// IMP=0x00100000006461ba
- (_Bool)fileExtensionHidden;	// IMP=0x0010000000646188
- (unsigned long long)fileSystemFileNumber;	// IMP=0x0010000000646156
- (long long)fileSystemNumber;	// IMP=0x0010000000646124
- (unsigned long long)fileGroupOwnerAccountNumber;	// IMP=0x001000000064611c
- (id)fileGroupOwnerAccountName;	// IMP=0x0010000000646103
- (unsigned long long)fileOwnerAccountNumber;	// IMP=0x00100000006460fb
- (id)fileOwnerAccountName;	// IMP=0x00100000006460e2
- (unsigned long long)filePosixPermissions;	// IMP=0x00100000006460ad
- (id)fileType;	// IMP=0x0010000000646094
- (id)fileModificationDate;	// IMP=0x001000000064607b
- (unsigned long long)fileSize;	// IMP=0x0010000000646049
- (id)valueForKeyPath:(id)arg1;	// IMP=0x001000000068483b
- (id)valueForKey:(id)arg1;	// IMP=0x0010000000684743
- (id)replacementObjectForPortCoder:(id)arg1;	// IMP=0x00100000007b1683
@end

