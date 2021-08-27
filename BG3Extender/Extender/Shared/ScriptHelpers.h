#pragma once

#include <GameDefinitions/BaseTypes.h>
#include <GameDefinitions/Item.h>

namespace bg3se::script {

	std::optional<STDWString> GetPathForExternalIo(std::string_view scriptPath, PathRootType root);
	std::optional<STDString> LoadExternalFile(std::string_view path, PathRootType root);
	bool SaveExternalFile(std::string_view path, PathRootType root, std::string_view contents);

	bool GetTranslatedString(char const* handle, STDString& translated);
	bool GetTranslatedStringFromKey(FixedString const& key, TranslatedString& translated);
	bool CreateTranslatedStringKey(FixedString const& key, FixedString const& handle);
	bool CreateTranslatedString(FixedString const& handle, STDString const& string);

	/*bool CreateItemDefinition(char const* templateGuid, ObjectSet<eoc::ItemDefinition>& definition);
	bool ParseItem(esv::Item* item, ObjectSet<eoc::ItemDefinition>& definition, bool recursive);*/
}