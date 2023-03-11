
#pragma once

#include "meta/common.h"
#include "test.h"
#include <pf_common/array.h>
#include <pf_common/concepts/ranges.h>
#include <type_traits>

/****************************** pf::SomeEnum::Value1 START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::SomeEnum::Value1", 20ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::SomeEnum::Value1", 20ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::SomeEnum", 12ull};
    using Type = pf::SomeEnum;

    constexpr static std::uint64_t SourceLine = 6;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>(pf::meta::Attribute{"test", {}}, pf::meta::Attribute{"test2", {}}, pf::meta::Attribute{"test3", {}});

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"Value1"};
    constexpr static auto FullName = StringLiteral{"pf::SomeEnum::Value1"};

    constexpr static bool UnderlyingValue = false;
    constexpr static pf::SomeEnum Value = pf::SomeEnum::Value1;
};
/****************************** pf::SomeEnum::Value1 END ******************************/

/****************************** pf::SomeEnum::Value2 START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::SomeEnum::Value2", 20ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::SomeEnum::Value2", 20ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::SomeEnum", 12ull};
    using Type = pf::SomeEnum;

    constexpr static std::uint64_t SourceLine = 6;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"Value2"};
    constexpr static auto FullName = StringLiteral{"pf::SomeEnum::Value2"};

    constexpr static bool UnderlyingValue = true;
    constexpr static pf::SomeEnum Value = pf::SomeEnum::Value2;
};
/****************************** pf::SomeEnum::Value2 END ******************************/

/****************************** pf::SomeEnum START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::SomeEnum", 12ull}> {
    using Type = pf::SomeEnum;
    constexpr static ID TypeID = ::pf::meta::ID{"pf::SomeEnum", 12ull};

    constexpr static std::uint64_t SourceLine = 6;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>(pf::meta::Attribute{"pf::operators", {R"(()()()((())))", R"([[nodiscard]])", R"(1ll)", R"(1.011)", R"([]{}())", R"("yeet")", R"('a')", R"([][][]:::3214234...[][][][])"}}, pf::meta::Attribute{"pf::hihi", {}}, pf::meta::Attribute{"pf::operators2", {R"(1ll)", R"(1.011)", R"("yeet")"}}, pf::meta::Attribute{"pf::hihi2", {}});

    constexpr static bool IsEnum = true;
    constexpr static bool IsEnumValue = false;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static bool IsLvalueReference = false;
    constexpr static bool IsRvalueReference = false;
    constexpr static bool IsConst = false;
    constexpr static bool IsPtr = false;

    constexpr static auto Name = ::pf::StringLiteral{"SomeEnum"};
    constexpr static auto FullName = ::pf::StringLiteral{"pf::SomeEnum"};

    using UnderlyingType = bool;
    constexpr static bool IsScoped = std::is_scoped_enum_v<Type>;
    constexpr static RangeOf<pf::meta::Info> auto EnumValues = pf::make_array<pf::meta::Info>(::pf::meta::ID{"pf::SomeEnum::Value1", 20ull}, ::pf::meta::ID{"pf::SomeEnum::Value2", 20ull});
};

// const
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::SomeEnum", 18ull}>
    : ::pf::meta::details::StaticInfo_ConstWrap<::pf::meta::ID{"const pf::SomeEnum", 18ull}, ::pf::meta::ID{"pf::SomeEnum", 12ull}> {};
// &
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::SomeEnum&", 13ull}>
    : ::pf::meta::details::StaticInfo_LRefWrap<::pf::meta::ID{"pf::SomeEnum&", 13ull}, ::pf::meta::ID{"pf::SomeEnum", 12ull}> {};
// &&
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::SomeEnum&&", 14ull}>
    : ::pf::meta::details::StaticInfo_RRefWrap<::pf::meta::ID{"pf::SomeEnum&&", 14ull}, ::pf::meta::ID{"pf::SomeEnum", 12ull}> {};
// const &
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::SomeEnum&", 19ull}>
    : ::pf::meta::details::StaticInfo_LRefWrap<::pf::meta::ID{"const pf::SomeEnum&", 19ull}, ::pf::meta::ID{"const pf::SomeEnum", 18ull}> {};
// *
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::SomeEnum*", 13ull}>
    : ::pf::meta::details::StaticInfo_PtrWrap<::pf::meta::ID{"pf::SomeEnum*", 13ull}, ::pf::meta::ID{"pf::SomeEnum", 12ull}> {};
// const *
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::SomeEnum*", 19ull}>
    : ::pf::meta::details::StaticInfo_PtrWrap<::pf::meta::ID{"const pf::SomeEnum*", 19ull}, ::pf::meta::ID{"const pf::SomeEnum", 18ull}> {};

/****************************** pf::SomeEnum END ******************************/
namespace pf::meta::details {
/****************************** pf::SomeEnum START ******************************/
template<>
[[nodiscard]] consteval ID getTypeId<pf::SomeEnum>() {
    return ::pf::meta::ID{"pf::SomeEnum", 12ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::SomeEnum>() {
    return ::pf::meta::ID{"const pf::SomeEnum", 18ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::SomeEnum &>() {
    return ::pf::meta::ID{"pf::SomeEnum&", 13ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::SomeEnum &&>() {
    return ::pf::meta::ID{"pf::SomeEnum&&", 14ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::SomeEnum &>() {
    return ::pf::meta::ID{"const pf::SomeEnum&", 19ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::SomeEnum *>() {
    return ::pf::meta::ID{"pf::SomeEnum*", 13ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::SomeEnum *>() {
    return ::pf::meta::ID{"const pf::SomeEnum*", 19ull};
}
/****************************** pf::SomeEnum END ******************************/

/****************************** pf::SomeEnum::pf::SomeEnum::Value1 START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::SomeEnum::Value1>() {
return ::pf::meta::ID{"pf::SomeEnum::Value1", 20ull};
}
/****************************** pf::SomeEnum::pf::SomeEnum::Value1 END ******************************/

/****************************** pf::SomeEnum::pf::SomeEnum::Value2 START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::SomeEnum::Value2>() {
return ::pf::meta::ID{"pf::SomeEnum::Value2", 20ull};
}
/****************************** pf::SomeEnum::pf::SomeEnum::Value2 END ******************************/
}
/****************************** pf::Test::E::Value1 START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::Test::E::Value1", 19ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::Test::E::Value1", 19ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::Test::E", 11ull};
    using Type = pf::Test::E;

    constexpr static std::uint64_t SourceLine = 9;
    constexpr static std::uint64_t SourceColumn = 9;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"Value1"};
    constexpr static auto FullName = StringLiteral{"pf::Test::E::Value1"};

    constexpr static int UnderlyingValue = 0;
    constexpr static pf::Test::E Value = pf::Test::E::Value1;
};
/****************************** pf::Test::E::Value1 END ******************************/

/****************************** pf::Test::E::Value2 START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::Test::E::Value2", 19ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::Test::E::Value2", 19ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::Test::E", 11ull};
    using Type = pf::Test::E;

    constexpr static std::uint64_t SourceLine = 9;
    constexpr static std::uint64_t SourceColumn = 9;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"Value2"};
    constexpr static auto FullName = StringLiteral{"pf::Test::E::Value2"};

    constexpr static int UnderlyingValue = 1;
    constexpr static pf::Test::E Value = pf::Test::E::Value2;
};
/****************************** pf::Test::E::Value2 END ******************************/

/****************************** pf::Test::E START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::Test::E", 11ull}> {
    using Type = pf::Test::E;
    constexpr static ID TypeID = ::pf::meta::ID{"pf::Test::E", 11ull};

    constexpr static std::uint64_t SourceLine = 9;
    constexpr static std::uint64_t SourceColumn = 9;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = true;
    constexpr static bool IsEnumValue = false;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static bool IsLvalueReference = false;
    constexpr static bool IsRvalueReference = false;
    constexpr static bool IsConst = false;
    constexpr static bool IsPtr = false;

    constexpr static auto Name = ::pf::StringLiteral{"E"};
    constexpr static auto FullName = ::pf::StringLiteral{"pf::Test::E"};

    using UnderlyingType = int;
    constexpr static bool IsScoped = std::is_scoped_enum_v<Type>;
    constexpr static RangeOf<pf::meta::Info> auto EnumValues = pf::make_array<pf::meta::Info>(::pf::meta::ID{"pf::Test::E::Value1", 19ull}, ::pf::meta::ID{"pf::Test::E::Value2", 19ull});
};

// const
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::Test::E", 17ull}>
    : ::pf::meta::details::StaticInfo_ConstWrap<::pf::meta::ID{"const pf::Test::E", 17ull}, ::pf::meta::ID{"pf::Test::E", 11ull}> {};
// &
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::Test::E&", 12ull}>
    : ::pf::meta::details::StaticInfo_LRefWrap<::pf::meta::ID{"pf::Test::E&", 12ull}, ::pf::meta::ID{"pf::Test::E", 11ull}> {};
// &&
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::Test::E&&", 13ull}>
    : ::pf::meta::details::StaticInfo_RRefWrap<::pf::meta::ID{"pf::Test::E&&", 13ull}, ::pf::meta::ID{"pf::Test::E", 11ull}> {};
// const &
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::Test::E&", 18ull}>
    : ::pf::meta::details::StaticInfo_LRefWrap<::pf::meta::ID{"const pf::Test::E&", 18ull}, ::pf::meta::ID{"const pf::Test::E", 17ull}> {};
// *
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::Test::E*", 12ull}>
    : ::pf::meta::details::StaticInfo_PtrWrap<::pf::meta::ID{"pf::Test::E*", 12ull}, ::pf::meta::ID{"pf::Test::E", 11ull}> {};
// const *
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::Test::E*", 18ull}>
    : ::pf::meta::details::StaticInfo_PtrWrap<::pf::meta::ID{"const pf::Test::E*", 18ull}, ::pf::meta::ID{"const pf::Test::E", 17ull}> {};

/****************************** pf::Test::E END ******************************/
namespace pf::meta::details {
/****************************** pf::Test::E START ******************************/
template<>
[[nodiscard]] consteval ID getTypeId<pf::Test::E>() {
    return ::pf::meta::ID{"pf::Test::E", 11ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::Test::E>() {
    return ::pf::meta::ID{"const pf::Test::E", 17ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::Test::E &>() {
    return ::pf::meta::ID{"pf::Test::E&", 12ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::Test::E &&>() {
    return ::pf::meta::ID{"pf::Test::E&&", 13ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::Test::E &>() {
    return ::pf::meta::ID{"const pf::Test::E&", 18ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::Test::E *>() {
    return ::pf::meta::ID{"pf::Test::E*", 12ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::Test::E *>() {
    return ::pf::meta::ID{"const pf::Test::E*", 18ull};
}
/****************************** pf::Test::E END ******************************/

/****************************** pf::Test::E::pf::Test::E::Value1 START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::Test::E::Value1>() {
return ::pf::meta::ID{"pf::Test::E::Value1", 19ull};
}
/****************************** pf::Test::E::pf::Test::E::Value1 END ******************************/

/****************************** pf::Test::E::pf::Test::E::Value2 START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::Test::E::Value2>() {
return ::pf::meta::ID{"pf::Test::E::Value2", 19ull};
}
/****************************** pf::Test::E::pf::Test::E::Value2 END ******************************/
}
/****************************** pf::EmptyEnum START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::EmptyEnum", 13ull}> {
    using Type = pf::EmptyEnum;
    constexpr static ID TypeID = ::pf::meta::ID{"pf::EmptyEnum", 13ull};

    constexpr static std::uint64_t SourceLine = 20;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = true;
    constexpr static bool IsEnumValue = false;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static bool IsLvalueReference = false;
    constexpr static bool IsRvalueReference = false;
    constexpr static bool IsConst = false;
    constexpr static bool IsPtr = false;

    constexpr static auto Name = ::pf::StringLiteral{"EmptyEnum"};
    constexpr static auto FullName = ::pf::StringLiteral{"pf::EmptyEnum"};

    using UnderlyingType = int;
    constexpr static bool IsScoped = std::is_scoped_enum_v<Type>;
    constexpr static RangeOf<pf::meta::Info> auto EnumValues = pf::make_array<pf::meta::Info>();
};

// const
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::EmptyEnum", 19ull}>
    : ::pf::meta::details::StaticInfo_ConstWrap<::pf::meta::ID{"const pf::EmptyEnum", 19ull}, ::pf::meta::ID{"pf::EmptyEnum", 13ull}> {};
// &
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::EmptyEnum&", 14ull}>
    : ::pf::meta::details::StaticInfo_LRefWrap<::pf::meta::ID{"pf::EmptyEnum&", 14ull}, ::pf::meta::ID{"pf::EmptyEnum", 13ull}> {};
// &&
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::EmptyEnum&&", 15ull}>
    : ::pf::meta::details::StaticInfo_RRefWrap<::pf::meta::ID{"pf::EmptyEnum&&", 15ull}, ::pf::meta::ID{"pf::EmptyEnum", 13ull}> {};
// const &
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::EmptyEnum&", 20ull}>
    : ::pf::meta::details::StaticInfo_LRefWrap<::pf::meta::ID{"const pf::EmptyEnum&", 20ull}, ::pf::meta::ID{"const pf::EmptyEnum", 19ull}> {};
// *
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::EmptyEnum*", 14ull}>
    : ::pf::meta::details::StaticInfo_PtrWrap<::pf::meta::ID{"pf::EmptyEnum*", 14ull}, ::pf::meta::ID{"pf::EmptyEnum", 13ull}> {};
// const *
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::EmptyEnum*", 20ull}>
    : ::pf::meta::details::StaticInfo_PtrWrap<::pf::meta::ID{"const pf::EmptyEnum*", 20ull}, ::pf::meta::ID{"const pf::EmptyEnum", 19ull}> {};

/****************************** pf::EmptyEnum END ******************************/
namespace pf::meta::details {
/****************************** pf::EmptyEnum START ******************************/
template<>
[[nodiscard]] consteval ID getTypeId<pf::EmptyEnum>() {
    return ::pf::meta::ID{"pf::EmptyEnum", 13ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::EmptyEnum>() {
    return ::pf::meta::ID{"const pf::EmptyEnum", 19ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::EmptyEnum &>() {
    return ::pf::meta::ID{"pf::EmptyEnum&", 14ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::EmptyEnum &&>() {
    return ::pf::meta::ID{"pf::EmptyEnum&&", 15ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::EmptyEnum &>() {
    return ::pf::meta::ID{"const pf::EmptyEnum&", 20ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::EmptyEnum *>() {
    return ::pf::meta::ID{"pf::EmptyEnum*", 14ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::EmptyEnum *>() {
    return ::pf::meta::ID{"const pf::EmptyEnum*", 20ull};
}
/****************************** pf::EmptyEnum END ******************************/
}
/****************************** pf::E1::A START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E1::A", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E1::A", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E1", 6ull};
    using Type = pf::E1;

    constexpr static std::uint64_t SourceLine = 22;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"A"};
    constexpr static auto FullName = StringLiteral{"pf::E1::A"};

    constexpr static int UnderlyingValue = 0;
    constexpr static pf::E1 Value = pf::E1::A;
};
/****************************** pf::E1::A END ******************************/

/****************************** pf::E1::B START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E1::B", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E1::B", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E1", 6ull};
    using Type = pf::E1;

    constexpr static std::uint64_t SourceLine = 22;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"B"};
    constexpr static auto FullName = StringLiteral{"pf::E1::B"};

    constexpr static int UnderlyingValue = 1;
    constexpr static pf::E1 Value = pf::E1::B;
};
/****************************** pf::E1::B END ******************************/

/****************************** pf::E1::C START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E1::C", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E1::C", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E1", 6ull};
    using Type = pf::E1;

    constexpr static std::uint64_t SourceLine = 22;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"C"};
    constexpr static auto FullName = StringLiteral{"pf::E1::C"};

    constexpr static int UnderlyingValue = 2;
    constexpr static pf::E1 Value = pf::E1::C;
};
/****************************** pf::E1::C END ******************************/

/****************************** pf::E1::D START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E1::D", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E1::D", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E1", 6ull};
    using Type = pf::E1;

    constexpr static std::uint64_t SourceLine = 22;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"D"};
    constexpr static auto FullName = StringLiteral{"pf::E1::D"};

    constexpr static int UnderlyingValue = 3;
    constexpr static pf::E1 Value = pf::E1::D;
};
/****************************** pf::E1::D END ******************************/

/****************************** pf::E1::E START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E1::E", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E1::E", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E1", 6ull};
    using Type = pf::E1;

    constexpr static std::uint64_t SourceLine = 22;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"E"};
    constexpr static auto FullName = StringLiteral{"pf::E1::E"};

    constexpr static int UnderlyingValue = 4;
    constexpr static pf::E1 Value = pf::E1::E;
};
/****************************** pf::E1::E END ******************************/

/****************************** pf::E1 START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E1", 6ull}> {
    using Type = pf::E1;
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E1", 6ull};

    constexpr static std::uint64_t SourceLine = 22;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = true;
    constexpr static bool IsEnumValue = false;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static bool IsLvalueReference = false;
    constexpr static bool IsRvalueReference = false;
    constexpr static bool IsConst = false;
    constexpr static bool IsPtr = false;

    constexpr static auto Name = ::pf::StringLiteral{"E1"};
    constexpr static auto FullName = ::pf::StringLiteral{"pf::E1"};

    using UnderlyingType = int;
    constexpr static bool IsScoped = std::is_scoped_enum_v<Type>;
    constexpr static RangeOf<pf::meta::Info> auto EnumValues = pf::make_array<pf::meta::Info>(::pf::meta::ID{"pf::E1::A", 9ull}, ::pf::meta::ID{"pf::E1::B", 9ull}, ::pf::meta::ID{"pf::E1::C", 9ull}, ::pf::meta::ID{"pf::E1::D", 9ull}, ::pf::meta::ID{"pf::E1::E", 9ull});
};

// const
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::E1", 12ull}>
    : ::pf::meta::details::StaticInfo_ConstWrap<::pf::meta::ID{"const pf::E1", 12ull}, ::pf::meta::ID{"pf::E1", 6ull}> {};
// &
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E1&", 7ull}>
    : ::pf::meta::details::StaticInfo_LRefWrap<::pf::meta::ID{"pf::E1&", 7ull}, ::pf::meta::ID{"pf::E1", 6ull}> {};
// &&
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E1&&", 8ull}>
    : ::pf::meta::details::StaticInfo_RRefWrap<::pf::meta::ID{"pf::E1&&", 8ull}, ::pf::meta::ID{"pf::E1", 6ull}> {};
// const &
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::E1&", 13ull}>
    : ::pf::meta::details::StaticInfo_LRefWrap<::pf::meta::ID{"const pf::E1&", 13ull}, ::pf::meta::ID{"const pf::E1", 12ull}> {};
// *
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E1*", 7ull}>
    : ::pf::meta::details::StaticInfo_PtrWrap<::pf::meta::ID{"pf::E1*", 7ull}, ::pf::meta::ID{"pf::E1", 6ull}> {};
// const *
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::E1*", 13ull}>
    : ::pf::meta::details::StaticInfo_PtrWrap<::pf::meta::ID{"const pf::E1*", 13ull}, ::pf::meta::ID{"const pf::E1", 12ull}> {};

/****************************** pf::E1 END ******************************/
namespace pf::meta::details {
/****************************** pf::E1 START ******************************/
template<>
[[nodiscard]] consteval ID getTypeId<pf::E1>() {
    return ::pf::meta::ID{"pf::E1", 6ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::E1>() {
    return ::pf::meta::ID{"const pf::E1", 12ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::E1 &>() {
    return ::pf::meta::ID{"pf::E1&", 7ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::E1 &&>() {
    return ::pf::meta::ID{"pf::E1&&", 8ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::E1 &>() {
    return ::pf::meta::ID{"const pf::E1&", 13ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::E1 *>() {
    return ::pf::meta::ID{"pf::E1*", 7ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::E1 *>() {
    return ::pf::meta::ID{"const pf::E1*", 13ull};
}
/****************************** pf::E1 END ******************************/

/****************************** pf::E1::pf::E1::A START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E1::A>() {
return ::pf::meta::ID{"pf::E1::A", 9ull};
}
/****************************** pf::E1::pf::E1::A END ******************************/

/****************************** pf::E1::pf::E1::B START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E1::B>() {
return ::pf::meta::ID{"pf::E1::B", 9ull};
}
/****************************** pf::E1::pf::E1::B END ******************************/

/****************************** pf::E1::pf::E1::C START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E1::C>() {
return ::pf::meta::ID{"pf::E1::C", 9ull};
}
/****************************** pf::E1::pf::E1::C END ******************************/

/****************************** pf::E1::pf::E1::D START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E1::D>() {
return ::pf::meta::ID{"pf::E1::D", 9ull};
}
/****************************** pf::E1::pf::E1::D END ******************************/

/****************************** pf::E1::pf::E1::E START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E1::E>() {
return ::pf::meta::ID{"pf::E1::E", 9ull};
}
/****************************** pf::E1::pf::E1::E END ******************************/
}
/****************************** pf::E2::A START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E2::A", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E2::A", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E2", 6ull};
    using Type = pf::E2;

    constexpr static std::uint64_t SourceLine = 23;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"A"};
    constexpr static auto FullName = StringLiteral{"pf::E2::A"};

    constexpr static int UnderlyingValue = 0;
    constexpr static pf::E2 Value = pf::E2::A;
};
/****************************** pf::E2::A END ******************************/

/****************************** pf::E2::B START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E2::B", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E2::B", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E2", 6ull};
    using Type = pf::E2;

    constexpr static std::uint64_t SourceLine = 23;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"B"};
    constexpr static auto FullName = StringLiteral{"pf::E2::B"};

    constexpr static int UnderlyingValue = 1;
    constexpr static pf::E2 Value = pf::E2::B;
};
/****************************** pf::E2::B END ******************************/

/****************************** pf::E2::C START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E2::C", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E2::C", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E2", 6ull};
    using Type = pf::E2;

    constexpr static std::uint64_t SourceLine = 23;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"C"};
    constexpr static auto FullName = StringLiteral{"pf::E2::C"};

    constexpr static int UnderlyingValue = 2;
    constexpr static pf::E2 Value = pf::E2::C;
};
/****************************** pf::E2::C END ******************************/

/****************************** pf::E2::D START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E2::D", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E2::D", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E2", 6ull};
    using Type = pf::E2;

    constexpr static std::uint64_t SourceLine = 23;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"D"};
    constexpr static auto FullName = StringLiteral{"pf::E2::D"};

    constexpr static int UnderlyingValue = 3;
    constexpr static pf::E2 Value = pf::E2::D;
};
/****************************** pf::E2::D END ******************************/

/****************************** pf::E2::E START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E2::E", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E2::E", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E2", 6ull};
    using Type = pf::E2;

    constexpr static std::uint64_t SourceLine = 23;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"E"};
    constexpr static auto FullName = StringLiteral{"pf::E2::E"};

    constexpr static int UnderlyingValue = 4;
    constexpr static pf::E2 Value = pf::E2::E;
};
/****************************** pf::E2::E END ******************************/

/****************************** pf::E2 START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E2", 6ull}> {
    using Type = pf::E2;
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E2", 6ull};

    constexpr static std::uint64_t SourceLine = 23;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = true;
    constexpr static bool IsEnumValue = false;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static bool IsLvalueReference = false;
    constexpr static bool IsRvalueReference = false;
    constexpr static bool IsConst = false;
    constexpr static bool IsPtr = false;

    constexpr static auto Name = ::pf::StringLiteral{"E2"};
    constexpr static auto FullName = ::pf::StringLiteral{"pf::E2"};

    using UnderlyingType = int;
    constexpr static bool IsScoped = std::is_scoped_enum_v<Type>;
    constexpr static RangeOf<pf::meta::Info> auto EnumValues = pf::make_array<pf::meta::Info>(::pf::meta::ID{"pf::E2::A", 9ull}, ::pf::meta::ID{"pf::E2::B", 9ull}, ::pf::meta::ID{"pf::E2::C", 9ull}, ::pf::meta::ID{"pf::E2::D", 9ull}, ::pf::meta::ID{"pf::E2::E", 9ull});
};

// const
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::E2", 12ull}>
    : ::pf::meta::details::StaticInfo_ConstWrap<::pf::meta::ID{"const pf::E2", 12ull}, ::pf::meta::ID{"pf::E2", 6ull}> {};
// &
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E2&", 7ull}>
    : ::pf::meta::details::StaticInfo_LRefWrap<::pf::meta::ID{"pf::E2&", 7ull}, ::pf::meta::ID{"pf::E2", 6ull}> {};
// &&
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E2&&", 8ull}>
    : ::pf::meta::details::StaticInfo_RRefWrap<::pf::meta::ID{"pf::E2&&", 8ull}, ::pf::meta::ID{"pf::E2", 6ull}> {};
// const &
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::E2&", 13ull}>
    : ::pf::meta::details::StaticInfo_LRefWrap<::pf::meta::ID{"const pf::E2&", 13ull}, ::pf::meta::ID{"const pf::E2", 12ull}> {};
// *
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E2*", 7ull}>
    : ::pf::meta::details::StaticInfo_PtrWrap<::pf::meta::ID{"pf::E2*", 7ull}, ::pf::meta::ID{"pf::E2", 6ull}> {};
// const *
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::E2*", 13ull}>
    : ::pf::meta::details::StaticInfo_PtrWrap<::pf::meta::ID{"const pf::E2*", 13ull}, ::pf::meta::ID{"const pf::E2", 12ull}> {};

/****************************** pf::E2 END ******************************/
namespace pf::meta::details {
/****************************** pf::E2 START ******************************/
template<>
[[nodiscard]] consteval ID getTypeId<pf::E2>() {
    return ::pf::meta::ID{"pf::E2", 6ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::E2>() {
    return ::pf::meta::ID{"const pf::E2", 12ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::E2 &>() {
    return ::pf::meta::ID{"pf::E2&", 7ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::E2 &&>() {
    return ::pf::meta::ID{"pf::E2&&", 8ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::E2 &>() {
    return ::pf::meta::ID{"const pf::E2&", 13ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::E2 *>() {
    return ::pf::meta::ID{"pf::E2*", 7ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::E2 *>() {
    return ::pf::meta::ID{"const pf::E2*", 13ull};
}
/****************************** pf::E2 END ******************************/

/****************************** pf::E2::pf::E2::A START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E2::A>() {
return ::pf::meta::ID{"pf::E2::A", 9ull};
}
/****************************** pf::E2::pf::E2::A END ******************************/

/****************************** pf::E2::pf::E2::B START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E2::B>() {
return ::pf::meta::ID{"pf::E2::B", 9ull};
}
/****************************** pf::E2::pf::E2::B END ******************************/

/****************************** pf::E2::pf::E2::C START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E2::C>() {
return ::pf::meta::ID{"pf::E2::C", 9ull};
}
/****************************** pf::E2::pf::E2::C END ******************************/

/****************************** pf::E2::pf::E2::D START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E2::D>() {
return ::pf::meta::ID{"pf::E2::D", 9ull};
}
/****************************** pf::E2::pf::E2::D END ******************************/

/****************************** pf::E2::pf::E2::E START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E2::E>() {
return ::pf::meta::ID{"pf::E2::E", 9ull};
}
/****************************** pf::E2::pf::E2::E END ******************************/
}
/****************************** pf::E3::A START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E3::A", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E3::A", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E3", 6ull};
    using Type = pf::E3;

    constexpr static std::uint64_t SourceLine = 24;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"A"};
    constexpr static auto FullName = StringLiteral{"pf::E3::A"};

    constexpr static int UnderlyingValue = 0;
    constexpr static pf::E3 Value = pf::E3::A;
};
/****************************** pf::E3::A END ******************************/

/****************************** pf::E3::B START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E3::B", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E3::B", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E3", 6ull};
    using Type = pf::E3;

    constexpr static std::uint64_t SourceLine = 24;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"B"};
    constexpr static auto FullName = StringLiteral{"pf::E3::B"};

    constexpr static int UnderlyingValue = 1;
    constexpr static pf::E3 Value = pf::E3::B;
};
/****************************** pf::E3::B END ******************************/

/****************************** pf::E3::C START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E3::C", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E3::C", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E3", 6ull};
    using Type = pf::E3;

    constexpr static std::uint64_t SourceLine = 24;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"C"};
    constexpr static auto FullName = StringLiteral{"pf::E3::C"};

    constexpr static int UnderlyingValue = 2;
    constexpr static pf::E3 Value = pf::E3::C;
};
/****************************** pf::E3::C END ******************************/

/****************************** pf::E3::D START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E3::D", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E3::D", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E3", 6ull};
    using Type = pf::E3;

    constexpr static std::uint64_t SourceLine = 24;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"D"};
    constexpr static auto FullName = StringLiteral{"pf::E3::D"};

    constexpr static int UnderlyingValue = 3;
    constexpr static pf::E3 Value = pf::E3::D;
};
/****************************** pf::E3::D END ******************************/

/****************************** pf::E3::E START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E3::E", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E3::E", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E3", 6ull};
    using Type = pf::E3;

    constexpr static std::uint64_t SourceLine = 24;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"E"};
    constexpr static auto FullName = StringLiteral{"pf::E3::E"};

    constexpr static int UnderlyingValue = 4;
    constexpr static pf::E3 Value = pf::E3::E;
};
/****************************** pf::E3::E END ******************************/

/****************************** pf::E3 START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E3", 6ull}> {
    using Type = pf::E3;
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E3", 6ull};

    constexpr static std::uint64_t SourceLine = 24;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = true;
    constexpr static bool IsEnumValue = false;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static bool IsLvalueReference = false;
    constexpr static bool IsRvalueReference = false;
    constexpr static bool IsConst = false;
    constexpr static bool IsPtr = false;

    constexpr static auto Name = ::pf::StringLiteral{"E3"};
    constexpr static auto FullName = ::pf::StringLiteral{"pf::E3"};

    using UnderlyingType = int;
    constexpr static bool IsScoped = std::is_scoped_enum_v<Type>;
    constexpr static RangeOf<pf::meta::Info> auto EnumValues = pf::make_array<pf::meta::Info>(::pf::meta::ID{"pf::E3::A", 9ull}, ::pf::meta::ID{"pf::E3::B", 9ull}, ::pf::meta::ID{"pf::E3::C", 9ull}, ::pf::meta::ID{"pf::E3::D", 9ull}, ::pf::meta::ID{"pf::E3::E", 9ull});
};

// const
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::E3", 12ull}>
    : ::pf::meta::details::StaticInfo_ConstWrap<::pf::meta::ID{"const pf::E3", 12ull}, ::pf::meta::ID{"pf::E3", 6ull}> {};
// &
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E3&", 7ull}>
    : ::pf::meta::details::StaticInfo_LRefWrap<::pf::meta::ID{"pf::E3&", 7ull}, ::pf::meta::ID{"pf::E3", 6ull}> {};
// &&
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E3&&", 8ull}>
    : ::pf::meta::details::StaticInfo_RRefWrap<::pf::meta::ID{"pf::E3&&", 8ull}, ::pf::meta::ID{"pf::E3", 6ull}> {};
// const &
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::E3&", 13ull}>
    : ::pf::meta::details::StaticInfo_LRefWrap<::pf::meta::ID{"const pf::E3&", 13ull}, ::pf::meta::ID{"const pf::E3", 12ull}> {};
// *
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E3*", 7ull}>
    : ::pf::meta::details::StaticInfo_PtrWrap<::pf::meta::ID{"pf::E3*", 7ull}, ::pf::meta::ID{"pf::E3", 6ull}> {};
// const *
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::E3*", 13ull}>
    : ::pf::meta::details::StaticInfo_PtrWrap<::pf::meta::ID{"const pf::E3*", 13ull}, ::pf::meta::ID{"const pf::E3", 12ull}> {};

/****************************** pf::E3 END ******************************/
namespace pf::meta::details {
/****************************** pf::E3 START ******************************/
template<>
[[nodiscard]] consteval ID getTypeId<pf::E3>() {
    return ::pf::meta::ID{"pf::E3", 6ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::E3>() {
    return ::pf::meta::ID{"const pf::E3", 12ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::E3 &>() {
    return ::pf::meta::ID{"pf::E3&", 7ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::E3 &&>() {
    return ::pf::meta::ID{"pf::E3&&", 8ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::E3 &>() {
    return ::pf::meta::ID{"const pf::E3&", 13ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::E3 *>() {
    return ::pf::meta::ID{"pf::E3*", 7ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::E3 *>() {
    return ::pf::meta::ID{"const pf::E3*", 13ull};
}
/****************************** pf::E3 END ******************************/

/****************************** pf::E3::pf::E3::A START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E3::A>() {
return ::pf::meta::ID{"pf::E3::A", 9ull};
}
/****************************** pf::E3::pf::E3::A END ******************************/

/****************************** pf::E3::pf::E3::B START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E3::B>() {
return ::pf::meta::ID{"pf::E3::B", 9ull};
}
/****************************** pf::E3::pf::E3::B END ******************************/

/****************************** pf::E3::pf::E3::C START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E3::C>() {
return ::pf::meta::ID{"pf::E3::C", 9ull};
}
/****************************** pf::E3::pf::E3::C END ******************************/

/****************************** pf::E3::pf::E3::D START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E3::D>() {
return ::pf::meta::ID{"pf::E3::D", 9ull};
}
/****************************** pf::E3::pf::E3::D END ******************************/

/****************************** pf::E3::pf::E3::E START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E3::E>() {
return ::pf::meta::ID{"pf::E3::E", 9ull};
}
/****************************** pf::E3::pf::E3::E END ******************************/
}
/****************************** pf::E4::A START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E4::A", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E4::A", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E4", 6ull};
    using Type = pf::E4;

    constexpr static std::uint64_t SourceLine = 25;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"A"};
    constexpr static auto FullName = StringLiteral{"pf::E4::A"};

    constexpr static int UnderlyingValue = 0;
    constexpr static pf::E4 Value = pf::E4::A;
};
/****************************** pf::E4::A END ******************************/

/****************************** pf::E4::B START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E4::B", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E4::B", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E4", 6ull};
    using Type = pf::E4;

    constexpr static std::uint64_t SourceLine = 25;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"B"};
    constexpr static auto FullName = StringLiteral{"pf::E4::B"};

    constexpr static int UnderlyingValue = 1;
    constexpr static pf::E4 Value = pf::E4::B;
};
/****************************** pf::E4::B END ******************************/

/****************************** pf::E4::C START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E4::C", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E4::C", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E4", 6ull};
    using Type = pf::E4;

    constexpr static std::uint64_t SourceLine = 25;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"C"};
    constexpr static auto FullName = StringLiteral{"pf::E4::C"};

    constexpr static int UnderlyingValue = 2;
    constexpr static pf::E4 Value = pf::E4::C;
};
/****************************** pf::E4::C END ******************************/

/****************************** pf::E4::D START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E4::D", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E4::D", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E4", 6ull};
    using Type = pf::E4;

    constexpr static std::uint64_t SourceLine = 25;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"D"};
    constexpr static auto FullName = StringLiteral{"pf::E4::D"};

    constexpr static int UnderlyingValue = 3;
    constexpr static pf::E4 Value = pf::E4::D;
};
/****************************** pf::E4::D END ******************************/

/****************************** pf::E4::E START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E4::E", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E4::E", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E4", 6ull};
    using Type = pf::E4;

    constexpr static std::uint64_t SourceLine = 25;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"E"};
    constexpr static auto FullName = StringLiteral{"pf::E4::E"};

    constexpr static int UnderlyingValue = 4;
    constexpr static pf::E4 Value = pf::E4::E;
};
/****************************** pf::E4::E END ******************************/

/****************************** pf::E4 START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E4", 6ull}> {
    using Type = pf::E4;
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E4", 6ull};

    constexpr static std::uint64_t SourceLine = 25;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = true;
    constexpr static bool IsEnumValue = false;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static bool IsLvalueReference = false;
    constexpr static bool IsRvalueReference = false;
    constexpr static bool IsConst = false;
    constexpr static bool IsPtr = false;

    constexpr static auto Name = ::pf::StringLiteral{"E4"};
    constexpr static auto FullName = ::pf::StringLiteral{"pf::E4"};

    using UnderlyingType = int;
    constexpr static bool IsScoped = std::is_scoped_enum_v<Type>;
    constexpr static RangeOf<pf::meta::Info> auto EnumValues = pf::make_array<pf::meta::Info>(::pf::meta::ID{"pf::E4::A", 9ull}, ::pf::meta::ID{"pf::E4::B", 9ull}, ::pf::meta::ID{"pf::E4::C", 9ull}, ::pf::meta::ID{"pf::E4::D", 9ull}, ::pf::meta::ID{"pf::E4::E", 9ull});
};

// const
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::E4", 12ull}>
    : ::pf::meta::details::StaticInfo_ConstWrap<::pf::meta::ID{"const pf::E4", 12ull}, ::pf::meta::ID{"pf::E4", 6ull}> {};
// &
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E4&", 7ull}>
    : ::pf::meta::details::StaticInfo_LRefWrap<::pf::meta::ID{"pf::E4&", 7ull}, ::pf::meta::ID{"pf::E4", 6ull}> {};
// &&
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E4&&", 8ull}>
    : ::pf::meta::details::StaticInfo_RRefWrap<::pf::meta::ID{"pf::E4&&", 8ull}, ::pf::meta::ID{"pf::E4", 6ull}> {};
// const &
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::E4&", 13ull}>
    : ::pf::meta::details::StaticInfo_LRefWrap<::pf::meta::ID{"const pf::E4&", 13ull}, ::pf::meta::ID{"const pf::E4", 12ull}> {};
// *
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E4*", 7ull}>
    : ::pf::meta::details::StaticInfo_PtrWrap<::pf::meta::ID{"pf::E4*", 7ull}, ::pf::meta::ID{"pf::E4", 6ull}> {};
// const *
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::E4*", 13ull}>
    : ::pf::meta::details::StaticInfo_PtrWrap<::pf::meta::ID{"const pf::E4*", 13ull}, ::pf::meta::ID{"const pf::E4", 12ull}> {};

/****************************** pf::E4 END ******************************/
namespace pf::meta::details {
/****************************** pf::E4 START ******************************/
template<>
[[nodiscard]] consteval ID getTypeId<pf::E4>() {
    return ::pf::meta::ID{"pf::E4", 6ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::E4>() {
    return ::pf::meta::ID{"const pf::E4", 12ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::E4 &>() {
    return ::pf::meta::ID{"pf::E4&", 7ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::E4 &&>() {
    return ::pf::meta::ID{"pf::E4&&", 8ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::E4 &>() {
    return ::pf::meta::ID{"const pf::E4&", 13ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::E4 *>() {
    return ::pf::meta::ID{"pf::E4*", 7ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::E4 *>() {
    return ::pf::meta::ID{"const pf::E4*", 13ull};
}
/****************************** pf::E4 END ******************************/

/****************************** pf::E4::pf::E4::A START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E4::A>() {
return ::pf::meta::ID{"pf::E4::A", 9ull};
}
/****************************** pf::E4::pf::E4::A END ******************************/

/****************************** pf::E4::pf::E4::B START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E4::B>() {
return ::pf::meta::ID{"pf::E4::B", 9ull};
}
/****************************** pf::E4::pf::E4::B END ******************************/

/****************************** pf::E4::pf::E4::C START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E4::C>() {
return ::pf::meta::ID{"pf::E4::C", 9ull};
}
/****************************** pf::E4::pf::E4::C END ******************************/

/****************************** pf::E4::pf::E4::D START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E4::D>() {
return ::pf::meta::ID{"pf::E4::D", 9ull};
}
/****************************** pf::E4::pf::E4::D END ******************************/

/****************************** pf::E4::pf::E4::E START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E4::E>() {
return ::pf::meta::ID{"pf::E4::E", 9ull};
}
/****************************** pf::E4::pf::E4::E END ******************************/
}
/****************************** pf::E5::A START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E5::A", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E5::A", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E5", 6ull};
    using Type = pf::E5;

    constexpr static std::uint64_t SourceLine = 26;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"A"};
    constexpr static auto FullName = StringLiteral{"pf::E5::A"};

    constexpr static int UnderlyingValue = 0;
    constexpr static pf::E5 Value = pf::E5::A;
};
/****************************** pf::E5::A END ******************************/

/****************************** pf::E5::B START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E5::B", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E5::B", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E5", 6ull};
    using Type = pf::E5;

    constexpr static std::uint64_t SourceLine = 26;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"B"};
    constexpr static auto FullName = StringLiteral{"pf::E5::B"};

    constexpr static int UnderlyingValue = 1;
    constexpr static pf::E5 Value = pf::E5::B;
};
/****************************** pf::E5::B END ******************************/

/****************************** pf::E5::C START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E5::C", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E5::C", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E5", 6ull};
    using Type = pf::E5;

    constexpr static std::uint64_t SourceLine = 26;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"C"};
    constexpr static auto FullName = StringLiteral{"pf::E5::C"};

    constexpr static int UnderlyingValue = 2;
    constexpr static pf::E5 Value = pf::E5::C;
};
/****************************** pf::E5::C END ******************************/

/****************************** pf::E5::D START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E5::D", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E5::D", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E5", 6ull};
    using Type = pf::E5;

    constexpr static std::uint64_t SourceLine = 26;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"D"};
    constexpr static auto FullName = StringLiteral{"pf::E5::D"};

    constexpr static int UnderlyingValue = 3;
    constexpr static pf::E5 Value = pf::E5::D;
};
/****************************** pf::E5::D END ******************************/

/****************************** pf::E5::E START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E5::E", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E5::E", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E5", 6ull};
    using Type = pf::E5;

    constexpr static std::uint64_t SourceLine = 26;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"E"};
    constexpr static auto FullName = StringLiteral{"pf::E5::E"};

    constexpr static int UnderlyingValue = 4;
    constexpr static pf::E5 Value = pf::E5::E;
};
/****************************** pf::E5::E END ******************************/

/****************************** pf::E5 START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E5", 6ull}> {
    using Type = pf::E5;
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E5", 6ull};

    constexpr static std::uint64_t SourceLine = 26;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = true;
    constexpr static bool IsEnumValue = false;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static bool IsLvalueReference = false;
    constexpr static bool IsRvalueReference = false;
    constexpr static bool IsConst = false;
    constexpr static bool IsPtr = false;

    constexpr static auto Name = ::pf::StringLiteral{"E5"};
    constexpr static auto FullName = ::pf::StringLiteral{"pf::E5"};

    using UnderlyingType = int;
    constexpr static bool IsScoped = std::is_scoped_enum_v<Type>;
    constexpr static RangeOf<pf::meta::Info> auto EnumValues = pf::make_array<pf::meta::Info>(::pf::meta::ID{"pf::E5::A", 9ull}, ::pf::meta::ID{"pf::E5::B", 9ull}, ::pf::meta::ID{"pf::E5::C", 9ull}, ::pf::meta::ID{"pf::E5::D", 9ull}, ::pf::meta::ID{"pf::E5::E", 9ull});
};

// const
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::E5", 12ull}>
    : ::pf::meta::details::StaticInfo_ConstWrap<::pf::meta::ID{"const pf::E5", 12ull}, ::pf::meta::ID{"pf::E5", 6ull}> {};
// &
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E5&", 7ull}>
    : ::pf::meta::details::StaticInfo_LRefWrap<::pf::meta::ID{"pf::E5&", 7ull}, ::pf::meta::ID{"pf::E5", 6ull}> {};
// &&
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E5&&", 8ull}>
    : ::pf::meta::details::StaticInfo_RRefWrap<::pf::meta::ID{"pf::E5&&", 8ull}, ::pf::meta::ID{"pf::E5", 6ull}> {};
// const &
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::E5&", 13ull}>
    : ::pf::meta::details::StaticInfo_LRefWrap<::pf::meta::ID{"const pf::E5&", 13ull}, ::pf::meta::ID{"const pf::E5", 12ull}> {};
// *
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E5*", 7ull}>
    : ::pf::meta::details::StaticInfo_PtrWrap<::pf::meta::ID{"pf::E5*", 7ull}, ::pf::meta::ID{"pf::E5", 6ull}> {};
// const *
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::E5*", 13ull}>
    : ::pf::meta::details::StaticInfo_PtrWrap<::pf::meta::ID{"const pf::E5*", 13ull}, ::pf::meta::ID{"const pf::E5", 12ull}> {};

/****************************** pf::E5 END ******************************/
namespace pf::meta::details {
/****************************** pf::E5 START ******************************/
template<>
[[nodiscard]] consteval ID getTypeId<pf::E5>() {
    return ::pf::meta::ID{"pf::E5", 6ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::E5>() {
    return ::pf::meta::ID{"const pf::E5", 12ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::E5 &>() {
    return ::pf::meta::ID{"pf::E5&", 7ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::E5 &&>() {
    return ::pf::meta::ID{"pf::E5&&", 8ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::E5 &>() {
    return ::pf::meta::ID{"const pf::E5&", 13ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::E5 *>() {
    return ::pf::meta::ID{"pf::E5*", 7ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::E5 *>() {
    return ::pf::meta::ID{"const pf::E5*", 13ull};
}
/****************************** pf::E5 END ******************************/

/****************************** pf::E5::pf::E5::A START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E5::A>() {
return ::pf::meta::ID{"pf::E5::A", 9ull};
}
/****************************** pf::E5::pf::E5::A END ******************************/

/****************************** pf::E5::pf::E5::B START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E5::B>() {
return ::pf::meta::ID{"pf::E5::B", 9ull};
}
/****************************** pf::E5::pf::E5::B END ******************************/

/****************************** pf::E5::pf::E5::C START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E5::C>() {
return ::pf::meta::ID{"pf::E5::C", 9ull};
}
/****************************** pf::E5::pf::E5::C END ******************************/

/****************************** pf::E5::pf::E5::D START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E5::D>() {
return ::pf::meta::ID{"pf::E5::D", 9ull};
}
/****************************** pf::E5::pf::E5::D END ******************************/

/****************************** pf::E5::pf::E5::E START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E5::E>() {
return ::pf::meta::ID{"pf::E5::E", 9ull};
}
/****************************** pf::E5::pf::E5::E END ******************************/
}
/****************************** pf::E6::A START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E6::A", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E6::A", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E6", 6ull};
    using Type = pf::E6;

    constexpr static std::uint64_t SourceLine = 27;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"A"};
    constexpr static auto FullName = StringLiteral{"pf::E6::A"};

    constexpr static int UnderlyingValue = 0;
    constexpr static pf::E6 Value = pf::E6::A;
};
/****************************** pf::E6::A END ******************************/

/****************************** pf::E6::B START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E6::B", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E6::B", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E6", 6ull};
    using Type = pf::E6;

    constexpr static std::uint64_t SourceLine = 27;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"B"};
    constexpr static auto FullName = StringLiteral{"pf::E6::B"};

    constexpr static int UnderlyingValue = 1;
    constexpr static pf::E6 Value = pf::E6::B;
};
/****************************** pf::E6::B END ******************************/

/****************************** pf::E6::C START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E6::C", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E6::C", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E6", 6ull};
    using Type = pf::E6;

    constexpr static std::uint64_t SourceLine = 27;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"C"};
    constexpr static auto FullName = StringLiteral{"pf::E6::C"};

    constexpr static int UnderlyingValue = 2;
    constexpr static pf::E6 Value = pf::E6::C;
};
/****************************** pf::E6::C END ******************************/

/****************************** pf::E6::D START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E6::D", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E6::D", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E6", 6ull};
    using Type = pf::E6;

    constexpr static std::uint64_t SourceLine = 27;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"D"};
    constexpr static auto FullName = StringLiteral{"pf::E6::D"};

    constexpr static int UnderlyingValue = 3;
    constexpr static pf::E6 Value = pf::E6::D;
};
/****************************** pf::E6::D END ******************************/

/****************************** pf::E6::E START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E6::E", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E6::E", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E6", 6ull};
    using Type = pf::E6;

    constexpr static std::uint64_t SourceLine = 27;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"E"};
    constexpr static auto FullName = StringLiteral{"pf::E6::E"};

    constexpr static int UnderlyingValue = 4;
    constexpr static pf::E6 Value = pf::E6::E;
};
/****************************** pf::E6::E END ******************************/

/****************************** pf::E6 START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E6", 6ull}> {
    using Type = pf::E6;
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E6", 6ull};

    constexpr static std::uint64_t SourceLine = 27;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = true;
    constexpr static bool IsEnumValue = false;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static bool IsLvalueReference = false;
    constexpr static bool IsRvalueReference = false;
    constexpr static bool IsConst = false;
    constexpr static bool IsPtr = false;

    constexpr static auto Name = ::pf::StringLiteral{"E6"};
    constexpr static auto FullName = ::pf::StringLiteral{"pf::E6"};

    using UnderlyingType = int;
    constexpr static bool IsScoped = std::is_scoped_enum_v<Type>;
    constexpr static RangeOf<pf::meta::Info> auto EnumValues = pf::make_array<pf::meta::Info>(::pf::meta::ID{"pf::E6::A", 9ull}, ::pf::meta::ID{"pf::E6::B", 9ull}, ::pf::meta::ID{"pf::E6::C", 9ull}, ::pf::meta::ID{"pf::E6::D", 9ull}, ::pf::meta::ID{"pf::E6::E", 9ull});
};

// const
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::E6", 12ull}>
    : ::pf::meta::details::StaticInfo_ConstWrap<::pf::meta::ID{"const pf::E6", 12ull}, ::pf::meta::ID{"pf::E6", 6ull}> {};
// &
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E6&", 7ull}>
    : ::pf::meta::details::StaticInfo_LRefWrap<::pf::meta::ID{"pf::E6&", 7ull}, ::pf::meta::ID{"pf::E6", 6ull}> {};
// &&
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E6&&", 8ull}>
    : ::pf::meta::details::StaticInfo_RRefWrap<::pf::meta::ID{"pf::E6&&", 8ull}, ::pf::meta::ID{"pf::E6", 6ull}> {};
// const &
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::E6&", 13ull}>
    : ::pf::meta::details::StaticInfo_LRefWrap<::pf::meta::ID{"const pf::E6&", 13ull}, ::pf::meta::ID{"const pf::E6", 12ull}> {};
// *
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E6*", 7ull}>
    : ::pf::meta::details::StaticInfo_PtrWrap<::pf::meta::ID{"pf::E6*", 7ull}, ::pf::meta::ID{"pf::E6", 6ull}> {};
// const *
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::E6*", 13ull}>
    : ::pf::meta::details::StaticInfo_PtrWrap<::pf::meta::ID{"const pf::E6*", 13ull}, ::pf::meta::ID{"const pf::E6", 12ull}> {};

/****************************** pf::E6 END ******************************/
namespace pf::meta::details {
/****************************** pf::E6 START ******************************/
template<>
[[nodiscard]] consteval ID getTypeId<pf::E6>() {
    return ::pf::meta::ID{"pf::E6", 6ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::E6>() {
    return ::pf::meta::ID{"const pf::E6", 12ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::E6 &>() {
    return ::pf::meta::ID{"pf::E6&", 7ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::E6 &&>() {
    return ::pf::meta::ID{"pf::E6&&", 8ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::E6 &>() {
    return ::pf::meta::ID{"const pf::E6&", 13ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::E6 *>() {
    return ::pf::meta::ID{"pf::E6*", 7ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::E6 *>() {
    return ::pf::meta::ID{"const pf::E6*", 13ull};
}
/****************************** pf::E6 END ******************************/

/****************************** pf::E6::pf::E6::A START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E6::A>() {
return ::pf::meta::ID{"pf::E6::A", 9ull};
}
/****************************** pf::E6::pf::E6::A END ******************************/

/****************************** pf::E6::pf::E6::B START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E6::B>() {
return ::pf::meta::ID{"pf::E6::B", 9ull};
}
/****************************** pf::E6::pf::E6::B END ******************************/

/****************************** pf::E6::pf::E6::C START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E6::C>() {
return ::pf::meta::ID{"pf::E6::C", 9ull};
}
/****************************** pf::E6::pf::E6::C END ******************************/

/****************************** pf::E6::pf::E6::D START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E6::D>() {
return ::pf::meta::ID{"pf::E6::D", 9ull};
}
/****************************** pf::E6::pf::E6::D END ******************************/

/****************************** pf::E6::pf::E6::E START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E6::E>() {
return ::pf::meta::ID{"pf::E6::E", 9ull};
}
/****************************** pf::E6::pf::E6::E END ******************************/
}
/****************************** pf::E7::A START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E7::A", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E7::A", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E7", 6ull};
    using Type = pf::E7;

    constexpr static std::uint64_t SourceLine = 28;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"A"};
    constexpr static auto FullName = StringLiteral{"pf::E7::A"};

    constexpr static int UnderlyingValue = 0;
    constexpr static pf::E7 Value = pf::E7::A;
};
/****************************** pf::E7::A END ******************************/

/****************************** pf::E7::B START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E7::B", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E7::B", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E7", 6ull};
    using Type = pf::E7;

    constexpr static std::uint64_t SourceLine = 28;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"B"};
    constexpr static auto FullName = StringLiteral{"pf::E7::B"};

    constexpr static int UnderlyingValue = 1;
    constexpr static pf::E7 Value = pf::E7::B;
};
/****************************** pf::E7::B END ******************************/

/****************************** pf::E7::C START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E7::C", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E7::C", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E7", 6ull};
    using Type = pf::E7;

    constexpr static std::uint64_t SourceLine = 28;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"C"};
    constexpr static auto FullName = StringLiteral{"pf::E7::C"};

    constexpr static int UnderlyingValue = 2;
    constexpr static pf::E7 Value = pf::E7::C;
};
/****************************** pf::E7::C END ******************************/

/****************************** pf::E7::D START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E7::D", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E7::D", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E7", 6ull};
    using Type = pf::E7;

    constexpr static std::uint64_t SourceLine = 28;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"D"};
    constexpr static auto FullName = StringLiteral{"pf::E7::D"};

    constexpr static int UnderlyingValue = 3;
    constexpr static pf::E7 Value = pf::E7::D;
};
/****************************** pf::E7::D END ******************************/

/****************************** pf::E7::E START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E7::E", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E7::E", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E7", 6ull};
    using Type = pf::E7;

    constexpr static std::uint64_t SourceLine = 28;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"E"};
    constexpr static auto FullName = StringLiteral{"pf::E7::E"};

    constexpr static int UnderlyingValue = 4;
    constexpr static pf::E7 Value = pf::E7::E;
};
/****************************** pf::E7::E END ******************************/

/****************************** pf::E7 START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E7", 6ull}> {
    using Type = pf::E7;
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E7", 6ull};

    constexpr static std::uint64_t SourceLine = 28;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = true;
    constexpr static bool IsEnumValue = false;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static bool IsLvalueReference = false;
    constexpr static bool IsRvalueReference = false;
    constexpr static bool IsConst = false;
    constexpr static bool IsPtr = false;

    constexpr static auto Name = ::pf::StringLiteral{"E7"};
    constexpr static auto FullName = ::pf::StringLiteral{"pf::E7"};

    using UnderlyingType = int;
    constexpr static bool IsScoped = std::is_scoped_enum_v<Type>;
    constexpr static RangeOf<pf::meta::Info> auto EnumValues = pf::make_array<pf::meta::Info>(::pf::meta::ID{"pf::E7::A", 9ull}, ::pf::meta::ID{"pf::E7::B", 9ull}, ::pf::meta::ID{"pf::E7::C", 9ull}, ::pf::meta::ID{"pf::E7::D", 9ull}, ::pf::meta::ID{"pf::E7::E", 9ull});
};

// const
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::E7", 12ull}>
    : ::pf::meta::details::StaticInfo_ConstWrap<::pf::meta::ID{"const pf::E7", 12ull}, ::pf::meta::ID{"pf::E7", 6ull}> {};
// &
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E7&", 7ull}>
    : ::pf::meta::details::StaticInfo_LRefWrap<::pf::meta::ID{"pf::E7&", 7ull}, ::pf::meta::ID{"pf::E7", 6ull}> {};
// &&
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E7&&", 8ull}>
    : ::pf::meta::details::StaticInfo_RRefWrap<::pf::meta::ID{"pf::E7&&", 8ull}, ::pf::meta::ID{"pf::E7", 6ull}> {};
// const &
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::E7&", 13ull}>
    : ::pf::meta::details::StaticInfo_LRefWrap<::pf::meta::ID{"const pf::E7&", 13ull}, ::pf::meta::ID{"const pf::E7", 12ull}> {};
// *
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E7*", 7ull}>
    : ::pf::meta::details::StaticInfo_PtrWrap<::pf::meta::ID{"pf::E7*", 7ull}, ::pf::meta::ID{"pf::E7", 6ull}> {};
// const *
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::E7*", 13ull}>
    : ::pf::meta::details::StaticInfo_PtrWrap<::pf::meta::ID{"const pf::E7*", 13ull}, ::pf::meta::ID{"const pf::E7", 12ull}> {};

/****************************** pf::E7 END ******************************/
namespace pf::meta::details {
/****************************** pf::E7 START ******************************/
template<>
[[nodiscard]] consteval ID getTypeId<pf::E7>() {
    return ::pf::meta::ID{"pf::E7", 6ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::E7>() {
    return ::pf::meta::ID{"const pf::E7", 12ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::E7 &>() {
    return ::pf::meta::ID{"pf::E7&", 7ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::E7 &&>() {
    return ::pf::meta::ID{"pf::E7&&", 8ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::E7 &>() {
    return ::pf::meta::ID{"const pf::E7&", 13ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::E7 *>() {
    return ::pf::meta::ID{"pf::E7*", 7ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::E7 *>() {
    return ::pf::meta::ID{"const pf::E7*", 13ull};
}
/****************************** pf::E7 END ******************************/

/****************************** pf::E7::pf::E7::A START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E7::A>() {
return ::pf::meta::ID{"pf::E7::A", 9ull};
}
/****************************** pf::E7::pf::E7::A END ******************************/

/****************************** pf::E7::pf::E7::B START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E7::B>() {
return ::pf::meta::ID{"pf::E7::B", 9ull};
}
/****************************** pf::E7::pf::E7::B END ******************************/

/****************************** pf::E7::pf::E7::C START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E7::C>() {
return ::pf::meta::ID{"pf::E7::C", 9ull};
}
/****************************** pf::E7::pf::E7::C END ******************************/

/****************************** pf::E7::pf::E7::D START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E7::D>() {
return ::pf::meta::ID{"pf::E7::D", 9ull};
}
/****************************** pf::E7::pf::E7::D END ******************************/

/****************************** pf::E7::pf::E7::E START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E7::E>() {
return ::pf::meta::ID{"pf::E7::E", 9ull};
}
/****************************** pf::E7::pf::E7::E END ******************************/
}
/****************************** pf::E8::A START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E8::A", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E8::A", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E8", 6ull};
    using Type = pf::E8;

    constexpr static std::uint64_t SourceLine = 29;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"A"};
    constexpr static auto FullName = StringLiteral{"pf::E8::A"};

    constexpr static int UnderlyingValue = 0;
    constexpr static pf::E8 Value = pf::E8::A;
};
/****************************** pf::E8::A END ******************************/

/****************************** pf::E8::B START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E8::B", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E8::B", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E8", 6ull};
    using Type = pf::E8;

    constexpr static std::uint64_t SourceLine = 29;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"B"};
    constexpr static auto FullName = StringLiteral{"pf::E8::B"};

    constexpr static int UnderlyingValue = 1;
    constexpr static pf::E8 Value = pf::E8::B;
};
/****************************** pf::E8::B END ******************************/

/****************************** pf::E8::C START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E8::C", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E8::C", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E8", 6ull};
    using Type = pf::E8;

    constexpr static std::uint64_t SourceLine = 29;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"C"};
    constexpr static auto FullName = StringLiteral{"pf::E8::C"};

    constexpr static int UnderlyingValue = 2;
    constexpr static pf::E8 Value = pf::E8::C;
};
/****************************** pf::E8::C END ******************************/

/****************************** pf::E8::D START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E8::D", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E8::D", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E8", 6ull};
    using Type = pf::E8;

    constexpr static std::uint64_t SourceLine = 29;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"D"};
    constexpr static auto FullName = StringLiteral{"pf::E8::D"};

    constexpr static int UnderlyingValue = 3;
    constexpr static pf::E8 Value = pf::E8::D;
};
/****************************** pf::E8::D END ******************************/

/****************************** pf::E8::E START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E8::E", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E8::E", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E8", 6ull};
    using Type = pf::E8;

    constexpr static std::uint64_t SourceLine = 29;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"E"};
    constexpr static auto FullName = StringLiteral{"pf::E8::E"};

    constexpr static int UnderlyingValue = 4;
    constexpr static pf::E8 Value = pf::E8::E;
};
/****************************** pf::E8::E END ******************************/

/****************************** pf::E8 START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E8", 6ull}> {
    using Type = pf::E8;
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E8", 6ull};

    constexpr static std::uint64_t SourceLine = 29;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = true;
    constexpr static bool IsEnumValue = false;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static bool IsLvalueReference = false;
    constexpr static bool IsRvalueReference = false;
    constexpr static bool IsConst = false;
    constexpr static bool IsPtr = false;

    constexpr static auto Name = ::pf::StringLiteral{"E8"};
    constexpr static auto FullName = ::pf::StringLiteral{"pf::E8"};

    using UnderlyingType = int;
    constexpr static bool IsScoped = std::is_scoped_enum_v<Type>;
    constexpr static RangeOf<pf::meta::Info> auto EnumValues = pf::make_array<pf::meta::Info>(::pf::meta::ID{"pf::E8::A", 9ull}, ::pf::meta::ID{"pf::E8::B", 9ull}, ::pf::meta::ID{"pf::E8::C", 9ull}, ::pf::meta::ID{"pf::E8::D", 9ull}, ::pf::meta::ID{"pf::E8::E", 9ull});
};

// const
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::E8", 12ull}>
    : ::pf::meta::details::StaticInfo_ConstWrap<::pf::meta::ID{"const pf::E8", 12ull}, ::pf::meta::ID{"pf::E8", 6ull}> {};
// &
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E8&", 7ull}>
    : ::pf::meta::details::StaticInfo_LRefWrap<::pf::meta::ID{"pf::E8&", 7ull}, ::pf::meta::ID{"pf::E8", 6ull}> {};
// &&
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E8&&", 8ull}>
    : ::pf::meta::details::StaticInfo_RRefWrap<::pf::meta::ID{"pf::E8&&", 8ull}, ::pf::meta::ID{"pf::E8", 6ull}> {};
// const &
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::E8&", 13ull}>
    : ::pf::meta::details::StaticInfo_LRefWrap<::pf::meta::ID{"const pf::E8&", 13ull}, ::pf::meta::ID{"const pf::E8", 12ull}> {};
// *
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E8*", 7ull}>
    : ::pf::meta::details::StaticInfo_PtrWrap<::pf::meta::ID{"pf::E8*", 7ull}, ::pf::meta::ID{"pf::E8", 6ull}> {};
// const *
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::E8*", 13ull}>
    : ::pf::meta::details::StaticInfo_PtrWrap<::pf::meta::ID{"const pf::E8*", 13ull}, ::pf::meta::ID{"const pf::E8", 12ull}> {};

/****************************** pf::E8 END ******************************/
namespace pf::meta::details {
/****************************** pf::E8 START ******************************/
template<>
[[nodiscard]] consteval ID getTypeId<pf::E8>() {
    return ::pf::meta::ID{"pf::E8", 6ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::E8>() {
    return ::pf::meta::ID{"const pf::E8", 12ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::E8 &>() {
    return ::pf::meta::ID{"pf::E8&", 7ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::E8 &&>() {
    return ::pf::meta::ID{"pf::E8&&", 8ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::E8 &>() {
    return ::pf::meta::ID{"const pf::E8&", 13ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::E8 *>() {
    return ::pf::meta::ID{"pf::E8*", 7ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::E8 *>() {
    return ::pf::meta::ID{"const pf::E8*", 13ull};
}
/****************************** pf::E8 END ******************************/

/****************************** pf::E8::pf::E8::A START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E8::A>() {
return ::pf::meta::ID{"pf::E8::A", 9ull};
}
/****************************** pf::E8::pf::E8::A END ******************************/

/****************************** pf::E8::pf::E8::B START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E8::B>() {
return ::pf::meta::ID{"pf::E8::B", 9ull};
}
/****************************** pf::E8::pf::E8::B END ******************************/

/****************************** pf::E8::pf::E8::C START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E8::C>() {
return ::pf::meta::ID{"pf::E8::C", 9ull};
}
/****************************** pf::E8::pf::E8::C END ******************************/

/****************************** pf::E8::pf::E8::D START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E8::D>() {
return ::pf::meta::ID{"pf::E8::D", 9ull};
}
/****************************** pf::E8::pf::E8::D END ******************************/

/****************************** pf::E8::pf::E8::E START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E8::E>() {
return ::pf::meta::ID{"pf::E8::E", 9ull};
}
/****************************** pf::E8::pf::E8::E END ******************************/
}
/****************************** pf::E9::A START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E9::A", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E9::A", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E9", 6ull};
    using Type = pf::E9;

    constexpr static std::uint64_t SourceLine = 30;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"A"};
    constexpr static auto FullName = StringLiteral{"pf::E9::A"};

    constexpr static int UnderlyingValue = 0;
    constexpr static pf::E9 Value = pf::E9::A;
};
/****************************** pf::E9::A END ******************************/

/****************************** pf::E9::B START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E9::B", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E9::B", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E9", 6ull};
    using Type = pf::E9;

    constexpr static std::uint64_t SourceLine = 30;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"B"};
    constexpr static auto FullName = StringLiteral{"pf::E9::B"};

    constexpr static int UnderlyingValue = 1;
    constexpr static pf::E9 Value = pf::E9::B;
};
/****************************** pf::E9::B END ******************************/

/****************************** pf::E9::C START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E9::C", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E9::C", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E9", 6ull};
    using Type = pf::E9;

    constexpr static std::uint64_t SourceLine = 30;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"C"};
    constexpr static auto FullName = StringLiteral{"pf::E9::C"};

    constexpr static int UnderlyingValue = 2;
    constexpr static pf::E9 Value = pf::E9::C;
};
/****************************** pf::E9::C END ******************************/

/****************************** pf::E9::D START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E9::D", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E9::D", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E9", 6ull};
    using Type = pf::E9;

    constexpr static std::uint64_t SourceLine = 30;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"D"};
    constexpr static auto FullName = StringLiteral{"pf::E9::D"};

    constexpr static int UnderlyingValue = 3;
    constexpr static pf::E9 Value = pf::E9::D;
};
/****************************** pf::E9::D END ******************************/

/****************************** pf::E9::E START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E9::E", 9ull}> {
    constexpr static ID ValueID = ::pf::meta::ID{"pf::E9::E", 9ull};
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E9", 6ull};
    using Type = pf::E9;

    constexpr static std::uint64_t SourceLine = 30;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = false;
    constexpr static bool IsEnumValue = true;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static auto Name = StringLiteral{"E"};
    constexpr static auto FullName = StringLiteral{"pf::E9::E"};

    constexpr static int UnderlyingValue = 4;
    constexpr static pf::E9 Value = pf::E9::E;
};
/****************************** pf::E9::E END ******************************/

/****************************** pf::E9 START ******************************/
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E9", 6ull}> {
    using Type = pf::E9;
    constexpr static ID TypeID = ::pf::meta::ID{"pf::E9", 6ull};

    constexpr static std::uint64_t SourceLine = 30;
    constexpr static std::uint64_t SourceColumn = 5;

    constexpr static RangeOf<pf::meta::Attribute> auto Attributes = pf::make_array<pf::meta::Attribute>();

    constexpr static bool IsEnum = true;
    constexpr static bool IsEnumValue = false;
    constexpr static bool IsRecord = false;
    constexpr static bool IsUnion = false;
    constexpr static bool IsPrimitiveType = false;

    constexpr static bool IsLvalueReference = false;
    constexpr static bool IsRvalueReference = false;
    constexpr static bool IsConst = false;
    constexpr static bool IsPtr = false;

    constexpr static auto Name = ::pf::StringLiteral{"E9"};
    constexpr static auto FullName = ::pf::StringLiteral{"pf::E9"};

    using UnderlyingType = int;
    constexpr static bool IsScoped = std::is_scoped_enum_v<Type>;
    constexpr static RangeOf<pf::meta::Info> auto EnumValues = pf::make_array<pf::meta::Info>(::pf::meta::ID{"pf::E9::A", 9ull}, ::pf::meta::ID{"pf::E9::B", 9ull}, ::pf::meta::ID{"pf::E9::C", 9ull}, ::pf::meta::ID{"pf::E9::D", 9ull}, ::pf::meta::ID{"pf::E9::E", 9ull});
};

// const
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::E9", 12ull}>
    : ::pf::meta::details::StaticInfo_ConstWrap<::pf::meta::ID{"const pf::E9", 12ull}, ::pf::meta::ID{"pf::E9", 6ull}> {};
// &
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E9&", 7ull}>
    : ::pf::meta::details::StaticInfo_LRefWrap<::pf::meta::ID{"pf::E9&", 7ull}, ::pf::meta::ID{"pf::E9", 6ull}> {};
// &&
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E9&&", 8ull}>
    : ::pf::meta::details::StaticInfo_RRefWrap<::pf::meta::ID{"pf::E9&&", 8ull}, ::pf::meta::ID{"pf::E9", 6ull}> {};
// const &
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::E9&", 13ull}>
    : ::pf::meta::details::StaticInfo_LRefWrap<::pf::meta::ID{"const pf::E9&", 13ull}, ::pf::meta::ID{"const pf::E9", 12ull}> {};
// *
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"pf::E9*", 7ull}>
    : ::pf::meta::details::StaticInfo_PtrWrap<::pf::meta::ID{"pf::E9*", 7ull}, ::pf::meta::ID{"pf::E9", 6ull}> {};
// const *
template<>
struct ::pf::meta::details::StaticInfo<::pf::meta::ID{"const pf::E9*", 13ull}>
    : ::pf::meta::details::StaticInfo_PtrWrap<::pf::meta::ID{"const pf::E9*", 13ull}, ::pf::meta::ID{"const pf::E9", 12ull}> {};

/****************************** pf::E9 END ******************************/
namespace pf::meta::details {
/****************************** pf::E9 START ******************************/
template<>
[[nodiscard]] consteval ID getTypeId<pf::E9>() {
    return ::pf::meta::ID{"pf::E9", 6ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::E9>() {
    return ::pf::meta::ID{"const pf::E9", 12ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::E9 &>() {
    return ::pf::meta::ID{"pf::E9&", 7ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::E9 &&>() {
    return ::pf::meta::ID{"pf::E9&&", 8ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::E9 &>() {
    return ::pf::meta::ID{"const pf::E9&", 13ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<pf::E9 *>() {
    return ::pf::meta::ID{"pf::E9*", 7ull};
}
template<>
[[nodiscard]] consteval ID getTypeId<const pf::E9 *>() {
    return ::pf::meta::ID{"const pf::E9*", 13ull};
}
/****************************** pf::E9 END ******************************/

/****************************** pf::E9::pf::E9::A START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E9::A>() {
return ::pf::meta::ID{"pf::E9::A", 9ull};
}
/****************************** pf::E9::pf::E9::A END ******************************/

/****************************** pf::E9::pf::E9::B START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E9::B>() {
return ::pf::meta::ID{"pf::E9::B", 9ull};
}
/****************************** pf::E9::pf::E9::B END ******************************/

/****************************** pf::E9::pf::E9::C START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E9::C>() {
return ::pf::meta::ID{"pf::E9::C", 9ull};
}
/****************************** pf::E9::pf::E9::C END ******************************/

/****************************** pf::E9::pf::E9::D START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E9::D>() {
return ::pf::meta::ID{"pf::E9::D", 9ull};
}
/****************************** pf::E9::pf::E9::D END ******************************/

/****************************** pf::E9::pf::E9::E START ******************************/
template<>
[[nodiscard]] consteval ID getConstantId<pf::E9::E>() {
return ::pf::meta::ID{"pf::E9::E", 9ull};
}
/****************************** pf::E9::pf::E9::E END ******************************/
}

