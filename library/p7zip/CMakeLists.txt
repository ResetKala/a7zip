cmake_minimum_required(VERSION 3.4.1)

project(p7zip C CXX)

set(P_SEVEN_ZIP_EXTRACT_LITE_SOURCES
        p7zip/CPP/7zip/Archive/7z/7zDecode.cpp
        p7zip/CPP/7zip/Archive/7z/7zExtract.cpp
        p7zip/CPP/7zip/Archive/7z/7zHandler.cpp
        p7zip/CPP/7zip/Archive/7z/7zHeader.cpp
        p7zip/CPP/7zip/Archive/7z/7zIn.cpp
        p7zip/CPP/7zip/Archive/7z/7zProperties.cpp
        p7zip/CPP/7zip/Archive/7z/7zRegister.cpp
        p7zip/CPP/7zip/Archive/ArchiveExports.cpp
        p7zip/CPP/7zip/Archive/Common/CoderMixer2.cpp
        p7zip/CPP/7zip/Archive/Common/FindSignature.cpp
        p7zip/CPP/7zip/Archive/Common/InStreamWithCRC.cpp
        p7zip/CPP/7zip/Archive/Common/ItemNameUtils.cpp
        p7zip/CPP/7zip/Archive/Common/OutStreamWithCRC.cpp
        p7zip/CPP/7zip/Archive/DllExports2.cpp
        p7zip/CPP/7zip/Archive/HandlerCont.cpp
        p7zip/CPP/7zip/Archive/Rar/RarHandler.cpp
        p7zip/CPP/7zip/Archive/Rar/Rar5Handler.cpp
        p7zip/CPP/7zip/Archive/XzHandler.cpp
        p7zip/CPP/7zip/Archive/Zip/ZipHandler.cpp
        p7zip/CPP/7zip/Archive/Zip/ZipIn.cpp
        p7zip/CPP/7zip/Archive/Zip/ZipItem.cpp
        p7zip/CPP/7zip/Archive/Zip/ZipRegister.cpp
        p7zip/CPP/7zip/Common/CWrappers.cpp
        p7zip/CPP/7zip/Common/CreateCoder.cpp
        p7zip/CPP/7zip/Common/FilterCoder.cpp
        p7zip/CPP/7zip/Common/InBuffer.cpp
        p7zip/CPP/7zip/Common/LimitedStreams.cpp
        p7zip/CPP/7zip/Common/OutBuffer.cpp
        p7zip/CPP/7zip/Common/ProgressUtils.cpp
        p7zip/CPP/7zip/Common/PropId.cpp
        p7zip/CPP/7zip/Common/StreamObjects.cpp
        p7zip/CPP/7zip/Common/StreamUtils.cpp
        p7zip/CPP/7zip/Compress/Bcj2Coder.cpp
        p7zip/CPP/7zip/Compress/Bcj2Register.cpp
        p7zip/CPP/7zip/Compress/BcjCoder.cpp
        p7zip/CPP/7zip/Compress/BcjRegister.cpp
        p7zip/CPP/7zip/Compress/BitlDecoder.cpp
        p7zip/CPP/7zip/Compress/BranchMisc.cpp
        p7zip/CPP/7zip/Compress/BranchRegister.cpp
        p7zip/CPP/7zip/Compress/ByteSwap.cpp
        p7zip/CPP/7zip/Compress/BZip2Crc.cpp
        p7zip/CPP/7zip/Compress/BZip2Decoder.cpp
        p7zip/CPP/7zip/Compress/BZip2Register.cpp
        p7zip/CPP/7zip/Compress/CodecExports.cpp
        p7zip/CPP/7zip/Compress/CopyCoder.cpp
        p7zip/CPP/7zip/Compress/CopyRegister.cpp
        p7zip/CPP/7zip/Compress/Deflate64Register.cpp
        p7zip/CPP/7zip/Compress/DeflateDecoder.cpp
        p7zip/CPP/7zip/Compress/DeflateRegister.cpp
        p7zip/CPP/7zip/Compress/DeltaFilter.cpp
        p7zip/CPP/7zip/Compress/ImplodeDecoder.cpp
        p7zip/CPP/7zip/Compress/ImplodeHuffmanDecoder.cpp
        p7zip/CPP/7zip/Compress/Lzma2Decoder.cpp
        p7zip/CPP/7zip/Compress/Lzma2Register.cpp
        p7zip/CPP/7zip/Compress/LzmaDecoder.cpp
        p7zip/CPP/7zip/Compress/LzmaRegister.cpp
        p7zip/CPP/7zip/Compress/LzOutWindow.cpp
        p7zip/CPP/7zip/Compress/PpmdDecoder.cpp
        p7zip/CPP/7zip/Compress/PpmdRegister.cpp
        p7zip/CPP/7zip/Compress/PpmdZip.cpp
        p7zip/CPP/7zip/Compress/Rar1Decoder.cpp
        p7zip/CPP/7zip/Compress/Rar2Decoder.cpp
        p7zip/CPP/7zip/Compress/Rar3Decoder.cpp
        p7zip/CPP/7zip/Compress/Rar3Vm.cpp
        p7zip/CPP/7zip/Compress/Rar5Decoder.cpp
        p7zip/CPP/7zip/Compress/RarCodecsRegister.cpp
        p7zip/CPP/7zip/Compress/ShrinkDecoder.cpp
        p7zip/CPP/7zip/Crypto/7zAes.cpp
        p7zip/CPP/7zip/Crypto/7zAesRegister.cpp
        p7zip/CPP/7zip/Crypto/HmacSha1.cpp
        p7zip/CPP/7zip/Crypto/HmacSha256.cpp
        p7zip/CPP/7zip/Crypto/MyAes.cpp
        p7zip/CPP/7zip/Crypto/MyAesReg.cpp
        p7zip/CPP/7zip/Crypto/Pbkdf2HmacSha1.cpp
        p7zip/CPP/7zip/Crypto/RandGen.cpp
        p7zip/CPP/7zip/Crypto/Rar20Crypto.cpp
        p7zip/CPP/7zip/Crypto/Rar5Aes.cpp
        p7zip/CPP/7zip/Crypto/RarAes.cpp
        p7zip/CPP/7zip/Crypto/WzAes.cpp
        p7zip/CPP/7zip/Crypto/ZipCrypto.cpp
        p7zip/CPP/7zip/Crypto/ZipStrong.cpp
        p7zip/CPP/Common/CRC.cpp
        p7zip/CPP/Common/CrcReg.cpp
        p7zip/CPP/Common/IntToString.cpp
        p7zip/CPP/Common/MyString.cpp
        p7zip/CPP/Common/MyVector.cpp
        p7zip/CPP/Common/MyWindows.cpp
        p7zip/CPP/Common/Sha1Reg.cpp
        p7zip/CPP/Common/Sha256Reg.cpp
        p7zip/CPP/Common/StringConvert.cpp
        p7zip/CPP/Common/StringToInt.cpp
        p7zip/CPP/Common/UTFConvert.cpp
        p7zip/CPP/Common/Wildcard.cpp
        p7zip/CPP/Common/XzCrc64Reg.cpp
        p7zip/CPP/Windows/PropVariant.cpp
        p7zip/CPP/Windows/PropVariantUtils.cpp
        p7zip/CPP/Windows/System.cpp
        p7zip/CPP/Windows/TimeUtils.cpp
        p7zip/CPP/myWindows/wine_date_and_time.cpp
        p7zip/C/7zCrc.c
        p7zip/C/7zCrcOpt.c
        p7zip/C/7zStream.c
        p7zip/C/Aes.c
        p7zip/C/Alloc.c
        p7zip/C/Bcj2.c
        p7zip/C/Blake2s.c
        p7zip/C/Bra.c
        p7zip/C/Bra86.c
        p7zip/C/BraIA64.c
        p7zip/C/CpuArch.c
        p7zip/C/Delta.c
        p7zip/C/Lzma2Dec.c
        p7zip/C/LzmaDec.c
        p7zip/C/Ppmd7.c
        p7zip/C/Ppmd7Dec.c
        p7zip/C/Ppmd8.c
        p7zip/C/Ppmd8Dec.c
        p7zip/C/Sha1.c
        p7zip/C/Sha256.c
        p7zip/C/Xz.c
        p7zip/C/XzCrc64.c
        p7zip/C/XzCrc64Opt.c
        p7zip/C/XzDec.c
        p7zip/C/XzIn.c
)

set(P_SEVEN_ZIP_INCLUDES
        p7zip/C
        p7zip/CPP
        p7zip/CPP/Common
        p7zip/CPP/include_windows
        p7zip/CPP/myWindows
        p7zip/CPP/Windows
)

set(P_SEVEN_ZIP_EXTRACT_FLAGS
        "-DEXTRACT_ONLY -D_7ZIP_ST"
)

set(P_SEVEN_ZIP_COMMON_FLAGS
        "-DANDROID_NDK -DNDEBUG -D_REENTRANT -DENV_UNIX -DEXTERNAL_CODECS -DUNICODE -D_UNICODE -DUNIX_USE_WIN_FILE"
)

if(EXTRACT AND LITE)
    set(P_SEVEN_ZIP_SOURCES ${P_SEVEN_ZIP_EXTRACT_LITE_SOURCES})
    set(P_SEVEN_ZIP_FLAGS "${P_SEVEN_ZIP_COMMON_FLAGS} ${P_SEVEN_ZIP_EXTRACT_FLAGS}")
else()
    message(FATAL_ERROR "Only EXTRACT LITE is supported now.")
endif()

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${P_SEVEN_ZIP_FLAGS}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${P_SEVEN_ZIP_FLAGS}")

add_library(p7zip SHARED ${P_SEVEN_ZIP_SOURCES})
target_include_directories(p7zip PUBLIC ${P_SEVEN_ZIP_INCLUDES})