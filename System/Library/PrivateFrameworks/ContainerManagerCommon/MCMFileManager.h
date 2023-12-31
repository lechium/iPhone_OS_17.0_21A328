//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MCMFileManager : NSObject
{
}

+ (id)defaultManager;	// IMP=0x001000000002c053
- (_Bool)_fixOwnershipOnFD:(int)arg1 FTSENT:(struct _ftsent *)arg2 stat:(struct stat *)arg3 statfs:(struct statfs *)arg4 uid:(unsigned int)arg5 gid:(unsigned int)arg6 error:(id *)arg7;	// IMP=0x000000000002a78a
- (_Bool)_fixFlagsOnFD:(int)arg1 FTSENT:(struct _ftsent *)arg2 stat:(struct stat *)arg3 error:(id *)arg4;	// IMP=0x000000000002a56d
- (_Bool)_fixPOSIXBitsOnFD:(int)arg1 FTSENT:(struct _ftsent *)arg2 stat:(struct stat *)arg3 error:(id *)arg4;	// IMP=0x000000000002a34a
- (_Bool)_fixPOSIXPermsOnFD:(int)arg1 FTSENT:(struct _ftsent *)arg2 stat:(struct stat *)arg3 error:(id *)arg4;	// IMP=0x0000000000029f41
- (_Bool)_fixACLOnFD:(int)arg1 removeACLFilesec:(struct _filesec *)arg2 denyDeleteFilesec:(struct _filesec *)arg3 denyDeleteText:(const char *)arg4 path:(const char *)arg5 error:(id *)arg6;	// IMP=0x0000000000029730
- (_Bool)_withEveryoneDenyDeleteACLDoBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000294fc
- (struct _filesec *)_denyDeleteACLFilesecWithACLText:(char **)arg1;	// IMP=0x0000000000029401
- (struct _filesec *)_removeACLFilesec;	// IMP=0x0000000000029399
- (_Bool)repairPermissionsAtURL:(id)arg1 uid:(unsigned int)arg2 gid:(unsigned int)arg3 options:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x000000000002895c
- (id)fsSanitizedStringFromString:(id)arg1;	// IMP=0x00000000000287ff
- (id)fsNodeOfURL:(id)arg1 followSymlinks:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000028688
- (id)copyDescriptionOfURL:(id)arg1;	// IMP=0x0000000000028440
- (_Bool)removeExclusionFromBackupFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002838d
- (_Bool)fixUserPermissionsAtURL:(id)arg1 limitToTopLevelURL:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002814b
- (unsigned long long)dataWritingOptionsForFileAtURL:(id)arg1;	// IMP=0x0000000000027e50
- (_Bool)stripACLFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000027e0c
- (_Bool)_enumeratePOSIX1eACLEntriesAtURL:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000027bed
- (_Bool)checkFileSystemAtURL:(id)arg1 supportsPerFileKeys:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x0000000000027a60
- (_Bool)checkFileSystemAtURL:(id)arg1 isCaseSensitive:(_Bool *)arg2 canAtomicSwap:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x0000000000027810
- (_Bool)compareVolumeForURL:(id)arg1 versusURL:(id)arg2 isSameVolume:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x00000000000273a6
- (_Bool)writeData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 mode:(unsigned short)arg4 error:(id *)arg5;	// IMP=0x0000000000026b30
- (id)readDataFromURL:(id)arg1 options:(unsigned long long)arg2 fsNode:(id *)arg3 error:(id *)arg4;	// IMP=0x00000000000263f1
- (id)readDataFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000263ae
- (id)realPathForURL:(id)arg1 isDirectory:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000026224
- (id)realPathForURL:(id)arg1 ifChildOfURL:(id)arg2;	// IMP=0x0000000000024831
- (_Bool)_validateSymlink:(id)arg1 withStartingDepth:(unsigned int)arg2 andEndingDepth:(unsigned int *)arg3;	// IMP=0x00000000000245ec
- (id)_realPathForURL:(id)arg1 allowNonExistentPathComponents:(_Bool)arg2;	// IMP=0x0000000000024325
- (id)_realPathWhatExistsInPath:(id)arg1;	// IMP=0x0000000000024107
- (CDStruct_4bcfbbae)diskUsageForURL:(id)arg1;	// IMP=0x0000000000023cf3
- (CDStruct_4bcfbbae)fastDiskUsageForURL:(id)arg1;	// IMP=0x0000000000023cb6
- (_Bool)enableFastDiskUsageForURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000023c77
- (void)printDirectoryStructureAtURL:(id)arg1;	// IMP=0x0000000000023944
- (_Bool)setDataProtectionClassOfItemAtURL:(id)arg1 toDataProtectionClass:(int)arg2 ifPredicate:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x0000000000023559
- (_Bool)dataProtectionClassOfItemAtURL:(id)arg1 dataProtectionClass:(int *)arg2 error:(id *)arg3;	// IMP=0x00000000000233d0
- (_Bool)itemDoesNotExistAtURL:(id)arg1;	// IMP=0x0000000000023390
- (_Bool)itemAtURL:(id)arg1 followSymlinks:(_Bool)arg2 exists:(_Bool *)arg3 isDirectory:(_Bool *)arg4 fsNode:(id *)arg5 error:(id *)arg6;	// IMP=0x0000000000022f89
- (_Bool)itemAtURL:(id)arg1 followSymlinks:(_Bool)arg2 exists:(_Bool *)arg3 isDirectory:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x0000000000022f40
- (_Bool)itemAtURL:(id)arg1 exists:(_Bool *)arg2 isDirectory:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x0000000000022ef3
- (_Bool)itemExistsAtURL:(id)arg1 isDirectory:(_Bool *)arg2;	// IMP=0x0000000000022ea1
- (_Bool)itemAtURL:(id)arg1 exists:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x0000000000022e5e
- (_Bool)itemExistsAtURL:(id)arg1;	// IMP=0x0000000000022e1f
- (id)urlsForItemsInDirectoryAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000229cb
- (_Bool)standardizeOwnershipAtURL:(id)arg1 toPOSIXUser:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002255e
- (_Bool)standardizeAllSystemContainerACLsAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000021f1e
- (_Bool)standardizeACLsForSystemContainerAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000021ed9
- (_Bool)standardizeACLsAtURL:(id)arg1 isSystemContainer:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000021ea6
- (_Bool)setTopLevelSystemContainerACLAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000021e73
- (struct _acl *)_CopyTopLevelSystemContainerACLWithError:(id *)arg1;	// IMP=0x0000000000021d59
- (struct _acl *)_CopySystemContainerACLWithNumACEs:(int)arg1 isDir:(_Bool)arg2 inheritOnly:(_Bool)arg3 withError:(id *)arg4;	// IMP=0x0000000000021c0c
- (_Bool)_CreateSystemUserACEInACL:(struct _acl **)arg1 withPermissions:(int)arg2 andFlags:(int)arg3 withError:(id *)arg4;	// IMP=0x00000000000217af
- (_Bool)_traverseDirectory:(id)arg1 error:(id *)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000213e2
- (id)createTemporaryDirectoryInDirectoryURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002139b
- (id)createTemporaryDirectoryInDirectoryURL:(id)arg1 withNamePrefix:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000021179
- (_Bool)replaceItemAtDestinationURL:(id)arg1 withSourceURL:(id)arg2 swapped:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x0000000000020f7a
- (_Bool)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000020f34
- (_Bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000020eee
- (_Bool)moveItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000020eab
- (_Bool)copyItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000020e68
- (_Bool)_moveItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000000209fa
- (_Bool)_copyItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000020751
- (id)targetOfSymbolicLinkAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000204e9
- (_Bool)symbolicallyLinkURL:(id)arg1 toSymlinkTarget:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000201c2
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 error:(id *)arg4;	// IMP=0x0000000000020107
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 dataProtectionClass:(int)arg4 error:(id *)arg5;	// IMP=0x000000000002004b
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 owner:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000020002
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 owner:(id)arg4 dataProtectionClass:(int)arg5 fsNode:(id *)arg6 error:(id *)arg7;	// IMP=0x000000000001fa74
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 owner:(id)arg4 dataProtectionClass:(int)arg5 error:(id *)arg6;	// IMP=0x000000000001fa22
- (_Bool)removeItemAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001f5d0

@end

